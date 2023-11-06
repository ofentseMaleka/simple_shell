#include <stdio.h>
#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */

void exec_com(const char *command)
{
	/*impliment exec.com function here*/
}
int main(void)
{
    char command[150];
    while (1)
    {
        display_prompt();
        rd_command(command, sizeof(command));
        exec_com(command);
        /* Rest of your code goes here */
    }
    return 0;
}

