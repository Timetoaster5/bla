#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	printf("input file: %s\n", argv[1]); // change to not print

	FILE *fileptr;
	char *file = argv[1];

	fileptr = fopen(file, "r");
	if (fileptr == NULL) {
		printf("file %s could not be opened\n", argv[1]);
	} else {
		printf("file %s COULD be opened\n", argv[1]);
	}	

	return 0;
}
