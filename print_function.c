#include "main.h"
void my_printf(char *output){
	write(STDOUT_FILENO, output, strlen(output));
	
}
