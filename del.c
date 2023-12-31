#include "main.h"
/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char *delim, char c)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
