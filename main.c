#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "internalCmd.h"

//initialize global variable
char *path;

int main() {

	printf("Welcome to the stupid console\n");

	char* input;

	while (1) {
		//calloc initializes memory block by setting each byte to 0.
		input = (char *) calloc(10000, 1);

		printf("stupid>>");
		fflush(stdout);
		read(0, input, 10000);


		//Free the input variable before next read
		free(input);
		input = NULL;
	}

	return 0;
}
