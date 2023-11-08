#include "shell.h"

const char *execute_command(const char *command) {
  char **args;
  char command_path[256];
  int arg_count = 0;

  if (command == NULL) {
    return NULL;
  }

  /* Split the command line into arguments */
  char *token = strtok((char *)command, " ");
  while (token != NULL) {
    args[arg_count] = strdup(token);
    arg_count++;
    token = strtok(NULL, " ");
  }
  args[arg_count] = NULL;

  /* Build the command path */
  snprintf(command_path, sizeof(command_path), "/bin/%s", args[0]);

  /* Execute the command */
  execve(command_path, args, NULL);

  /* Free allocated memory */
  for (int i = 0; i < arg_count; i++) {
    free(args[i]);
  }
  free(args);

  return 0;
}

