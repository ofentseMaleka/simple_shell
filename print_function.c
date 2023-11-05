#include "shell.h"
void my_print(char *output)
{
	write(STDOUT_FILENO, output, strlen(output));
	
}
