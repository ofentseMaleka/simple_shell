#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

const char *execute_command(const char *command) {
    /* Give variables at the beginning of the function. */
    char **args;
    char command_path[256];

    /* Check if the command is null. */
    if (command == NULL) {
        /* Handle error here. */
        return NULL;
    }

    /* Allocate an array to store the command arguments. */
    args = malloc(sizeof(char *) * 2);

    args[0] = strdup(command);
    args[1] = NULL;

    snprintf(command_path, sizeof(command_path), "/bin/%s", command);
    execve(command_path, args, NULL);

    free(args[0]);
    free(args);
    return NULL;
}

