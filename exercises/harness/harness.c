#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include "library.h"

#define SIZE 100


int main(int argc, char* argv[]) {

	// include code to explore the two functions in library.c
	
	char cmd[10] = {0};

	scanf("%s", cmd);
	
	if(strcmp(cmd, "echo") == 0) {
		char buffer[SIZE] = {0};
		ssize_t length;

		length = read(STDIN_FILENO, buffer, SIZE);

		lib_echo(buffer, length);
	} else if(strcmp(cmd, "mul") == 0) { // vamos testar aqui a lib_mul
		int a,b = 0;
		// read(STDIN_FILENO, &a, 4);
		// read(STDIN_FILENO, &b, 4);

		scanf("%d %d", &a, &b);

		printf("%d\n", lib_mul(a,b));
	}
	} else {
		printf("Usage: %s mul|echo\n", argv[0]);
	}
	

	
	return 0;
}
