#include "shell.h"

void execute_function(const char *function)
{
	pid_t child_pid = fork(); /* program for a child process*/

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE)
       	}
       	else if (child_pid == 0)
       	{
        /* Child process*/
       int executable = execve(function, argv, NULL);
       if (executable == -1) 
       {
        perror("execve");
        exit(EXIT_FAILURE);
	}
       	else 
	{
        /* Parent process*/
        wait(NULL);
	}
}
