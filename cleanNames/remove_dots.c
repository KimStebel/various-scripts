#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		fputs("need exactly one argument", stderr);
		exit(1);
	}
	int length = strlen(argv[1]);
	char* buffer = (char*)malloc(length);
	int i;
	int last_dot_found;
	last_dot_found = 0;
	for (i = length; i >= 0; i--) {
		char c =  argv[1][i];
		if (c =='.') {
			if (last_dot_found) {
				buffer[i] = ' ';
				continue;
			} else {
				last_dot_found = 1;
			}
		}
		buffer[i] = c;
	}
	puts(buffer);
	exit(0);
}
