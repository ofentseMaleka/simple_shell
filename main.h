#ifndef _SIMPLE_H
#define _SIMPLE_H

#include <stdio.h> /*for standard input /output */
#include <unistd.h> //used for system call: fork, exec, pipe etc //
#include <string.h> // working with strings//
#include <stdlib.h> //standard library function//
#include <sys/types.h> // data types used in system call//
#include <errorno.h> //error code and related function//
#include <perror.h> // for displaying error messages//
#include <malloc.h> //memory allocation//
#include <sys/wait.h> // for process control and waiting for child processes//
#include <limits.h> //limits related to integral data types//
#include <fcntl.h> //for file control function and oparations//
#include <sys/stat.h> // used for file and directory handling//

void exec_com(const char *comand);
void my_printf(char *message);
void prompt(void);
void rd_command(char *command,size_t size);

/* declaring shell commands*/
int exit(char**args);
int cd(char**args);
int help(char**args);i
#endif 
