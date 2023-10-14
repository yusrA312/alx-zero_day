#include "main.h"
/**
* execute - handles the exeation of other processes
 *execve - handle
 * @arguments: Arguments passed to the shell program.
 * @no_of_args: Number of arguments passed
 * @envp: Environment variables from the current system.
 * This function handles execution of an executable file
 * if it is detected in the current directory of in PATH.
*Return:  Nothing
 */

int execute(char **arguments, int no_of_args, char **envp)
{
	execve(arguments[0], arguments, envp);

	free_vector(arguments, no_of_args);

	perror("Error (execve)");

	exit(EXIT_FAILURE);
}
