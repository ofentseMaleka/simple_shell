#include "shell.h"

void input(char *read, size_t size) 
{
    if (fgets(read, size, stdin) == NULL) 
    {
        if (feof(stdin)) 
	{
            my_print("\n");
            exit(EXIT_SUCCESS); /* corrected our mistakes here */
        }
       	else 
	{
            my_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    read[strcspn(read, "\n")] = '\0';
}

