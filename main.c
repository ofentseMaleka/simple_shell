#include "main.h"

/**
 * free_data - Frees data structure
 *
 * @datash: Data structure
 * Return: None
 */
void free_data(data_shell *datash)
{
  for (size_t i = 0; datash->_environ[i]; i++) {
    free(datash->_environ[i]);
  }

  free(datash->_environ);
  free(datash->pid);
}

/**
 * set_data - Initializes data structure
 *
 * @datash: Data structure
 * @av: Argument vector
 * Return: None
 */
void set_data(data_shell *datash, char **av)
{
  datash->av = av;
  datash->input = NULL;
  datash->args = NULL;
  datash->status = 0;
  datash->counter = 1;

  size_t i = 0;
  while (environ[i]) {
    i++;
  }

  datash->_environ = malloc(sizeof(char *) * (i + 1));

  i = 0;
  while (environ[i]) {
    datash->_environ[i] = strdup(environ[i]);
    i++;
  }

  datash->_environ[i] = NULL;
  datash->pid = aux_itoa(getpid());
}

/**
 * main - Entry point
 *
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success.
 */

int
 
main(int ac, char **av)
{
  /* Shell data structure */
  data_shell datash;

  /* Ignore unused arguments */
  (void) ac;

  /* Handle SIGINT signal */
  signal(SIGINT, get_sigint);

  /* Initialize the shell data structure */
  set_data(&datash, av);

  /* Start the shell loop */
  shell_loop(&datash);

  /* Free the shell data structure */
  free_data(&datash);

  /* Return with the appropriate status code */
  return datash.status;
}
