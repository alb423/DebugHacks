#include <stdio.h>
#include <stdlib.h>
#include "phase.h"
#include "support.h"

FILE *infile;

int main(int argc, char *argv[])
{
	char input[256];

	if(argc == 1) {
		infile = stdin;
	}
	else if(argc == 2) {
		if(!(infile = fopen(argv[1], "r"))) {
			printf("%s: Error: Couldn't open %s\n", argv[0], argv[1]);
			exit(8);
		}
	}
	else {
		printf("Usage: %s [<input_file>]\n", argv[0]);
		exit(8);
	}

	printf("Example phase 0, please type in help\n");
	read_line(input);
	phase_0(input);
	printf("Phase 0 defused. It's your turn now, cheer up =)\n");

	read_line(input);
	phase_1(input);
	printf("Phase 1 defused.\n");

	read_line(input);
	phase_2(input);
	printf("Phase 2 defused.\n");

	read_line(input);
	phase_3(input);
	printf("Phase 3 defused.\n");

	read_line(input);
	phase_4(input);
	printf("Phase 4 defused.\n");

	printf("Congratulations! You've defused the bomb!\n");

	return 0;
}
