#include "shell.h"
#include <stdio.h>

void rd_command(char *command, size_t size) {
    char *result;
    (void) command;
    result = fgets(command, size, stdin);
    if (result == NULL) 
    {
    
    }
}
