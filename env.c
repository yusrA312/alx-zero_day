#include "main.h"
/**
 * _getenv - gets the value of a speficied environment variable
 * @key: Variable to look for
 * Return: Pointer to start index of the value.
 */
char *_getenv(char *key)
{
	size_t namelen = strlen(key);

	while (*ptr)
	{


		if (_strncmp(*ptr, key, namelen) == 0 &&
				(*ptr)[namelen] == '=')
		{

			return (&((*ptr)[namelen + 1]));
		}
		ptr++;
	}
	return  (NULL);
}
