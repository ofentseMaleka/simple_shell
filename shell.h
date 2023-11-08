#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <malloc.h>
#include <sys/wait.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>
#include <signal.h>
#include <sys/types.h>

/* list of the prototype */

const char *execute_command(const char *command)
void exec_com(const char *command);
void my_print(char *output);
void prompt(void);
void user_input(char *command, size_t size);
void execute_command(const char *command);
void rd_command(char *command, size_t size);
void display_prompt(void);
void execute_function(const char *function, char **argv);
char **parse_args(const char *input); /* Forward declaration */

/* Change name of  function not to cause avoid conflicts with standard library functions */
int my_exit(char **args);
int my_cd(char **args);
int my_help(char **args);

#endif

