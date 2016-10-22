//myshell.c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>

extern char **getline();
#define EXIT "exit"

int main() {
	int i;
 	char **args;

 	// main loop
 	while(1) {
 		printf("$ ");
 		args = getline();

 		for(i = 0; args[i] != NULL; i++) {
 			char* cmd;
 			if (i == 0) {
 				// command is here
 				cmd = args[i];

 				if (strcmp(cmd,EXIT) == 0) {
 					exit(0);
 				}

 			}
 			printf("Argument %d: %s\n", i, args[i]);
 		}
 	}
 }

