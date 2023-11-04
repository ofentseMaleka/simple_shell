#ifndef _SIMPLE_H
#define _SIMPLE_H

<<<<<<< HEAD
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
=======
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
>>>>>>> 93ea999b2e6235aa01594d7317fec22c24e5dc5a

void exec_com(const char *comand);
void my_printf(char *message);
void prompt(void);
void rd_command(char *command,size_t size);

/* declaring shell commands*/
int exit(char**args);
int cd(char**args);
int help(char**args);i
#endif 
