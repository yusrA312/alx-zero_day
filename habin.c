#include "main.h"
/**
 * handle_builtin - handles the built-in commands
 * @args: Arguments passed to the shell program.
 *@no_of_args: Number of arguments passed.
 * This function handles the different different builtin commands
 *that may be passed into the terminal.
 * Return: True if a built-in command is detected, else false.
 */
bool handle_builtin(char **args, size_t no_of_args)

{
	if (_strncmp(args[0], "exit", 4) == 0)
		handle_exit(args, no_of_args);

	else if ((_strncmp(args[0], "env", 3) == 0)
			|| (_strncmp(args[0], "printenv", 8 == 0)))
	{
		handle_env(args, no_of_args);
		return (true);
	}
	return (false);
}
