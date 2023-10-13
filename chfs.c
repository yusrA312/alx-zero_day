#include "main.h"
/**
 *check_file_status - checks if a file exists
 * @pathname: Path to the file
* @statbuf: Stores information on the file if it is found.
 * Return: True if it is found, else false.
 */
bool check_file_status(char *pathname, struct stat *statbuf)
{
	int stat_return;

	stat_return = stat(pathname,  struct stat *statbuf);

	if (stat_return == 0)

		return (true);
	return (false);
}
