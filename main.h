#ifndef _SIMPLE_H
#define _SIMPLE_H

#include <stdio.h>
#include <unistd.h> 
#include <string.h> 
#include <stdlib.h> 
#include <sys/types.h>
#include <errorno.h> 
#include <perror.h>
#include <malloc.h> 
#include <sys/wait.h>
#include <limits.h> 
#include <fcntl.h>
#include <sys/stat.h>

void exec_com(const char *comand);
void my_printf(char *message);
void prompt(void);
void rd_command(char *command,size_t size);

/* declaring shell commands*/
int exit(char**args);
int cd(char**args);
int help(char**args);i
#endif 
