#include "shell.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
    char command[150];
    while (1)
    {
        display_prompt();
	rd_command(command, sizeof(command));
        /* Rest of my  code will be here */
    }
    return 0;
}

