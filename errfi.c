#include "main.h"
/**
 * waiterr - Handle errors in waiting for child processes.
 * Return: None.
 */
void waiterr(void)
{
	perror("Error (wait)");
	free_vector(args, no_of_args);
	exit(EXIT_FAILURE);
}
/**
 * frokerr - Handle errors in creating child processes.
 * Return: None.
 */
void frokerr(void)
{
	perror("Error (fork)");
	free_vector(args, no_of_args);
	exit(EXIT_FAILURE);
}

