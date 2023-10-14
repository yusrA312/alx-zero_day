#include "main.h"
/**
 * _strncmp - This program compares the first n characters of two strings.
 *@s1:First string to be competed.
 *@s2: Second string to be competed.
 * @n: Number of characters to compare.
 *Return: negative, positive or zero integer.
 */

int _strncmp(char *s1, char *s2, size_t n)
{
	int u, diff;

	for (u = 0; u < n; u++)
	{
		diff = sl[u] - s2[u];
		if (diff > 0 || diff < 0)

			return (diff);
	}
	return (0);
}
