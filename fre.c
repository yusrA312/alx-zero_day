#include "main.h"
/**
 * free_vector - frees memory allocated to a 20 character array
 * @ver: Vector to be freed.
 * @len: Number of strings (pointers) in the vector.
 *Return: Nothing.
 */

void free_vector(char **ver, size_t len)
{
	size_t x;

	for (x = 0; x < len; x++)
		free(ver[x]);
	free(ver);
}
