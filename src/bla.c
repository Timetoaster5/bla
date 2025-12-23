#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int createbla(char *inputdirpath, char *outputfilepath) {
	DIR *inputdir;
	struct dirent *dir;
	FILE *outputfile; 
	
	inputdir = opendir(inputdirpath);	
	if (!inputdir) {
		perror("opendir");
		exit(1);
	}

	while ((dir = readdir(inputdir)) != NULL) {
		printf("%s\n", dir->d_name);
	}	
	closedir(inputdir); 
	return 0;
	//opendir *inputdir 
	//readdir *inputdir
	//fopen(*outputfile, "w"); 
	//go through struct item by item
	//if (filetype == normal) write contents to *outputfile
	//else if (filetype == dir) {opendir,readdir, check if file or 
	//dir, if file add header info about directory path & append to *outputfile, 
	//elseif dir continue opening it and repeat} 
	//uhm i was originally thinking about a system of adding all 
	//dir contents to a single struct but im not entirely sure that would work
}

int extractbla(char *inputfile, char *outputdir) {
}

//main should just decide if createbla or extractbla should be called
int main(int argc, char **argv) {
	FILE *fileptr;
	char *path = argv[1];

	fileptr = fopen(path, "r");
	if (fileptr == NULL) {
		perror("Failed to open file");
		return 1; 
	}	
	
	int c; 
	while ((c = fgetc(fileptr)) != EOF) {
		printf("%c", c); 
	}
	
	fclose(fileptr);	
	return 0;
}

