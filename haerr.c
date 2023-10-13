#include "main.h"
/**
 * handle_error -  fine erroe
 * @pid: from type pid_t
 *Return: Nothigs
 */
void handle_error(pid_t pid)
{
	if (pid == -1)
	{
		printf("Error");
		exit(EXIT_FAILURE);
	}
}
