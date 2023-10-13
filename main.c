#include "main.h"
/**
 * main - Entry point for the custom shell program.
 * @argc: Number of arguments provided.
 * @argv: Array of command-line arguments.
 * @env: Environment variables.
 * Return: Exit status.
 */

int main(int argc, char *argv[], char **env)
{
	int unusedVariable attribute((unused)), wstatus;
	char **args, *buff = NULL, *prompt = "$ ";
	size_t no_of_args, buff_size = 0;
	ssize_t bytes;
	pid_t wpid;
	bool from_pipe = false;
	struct stat statbuf;

	while (1 && !from_pipe)
	{
		if (isatty(STDIN_FILENO == 0))
			from_pipe = true;
		write(STDOUT_FILENO, prompt, 2);
		bytes = getline(&buff, &buff_size, stdin);
		if (bytes == -1)
			exit(EXIT_FAILURE);
		if (buff[bytes - 1] == '\n')
			buff[bytes - 1] = '\0';
		args = split_string(buff, " ", &no_of_args);
		if (handle_builtin(args, no_of_args))
			continue;
		if (check_file_status(args[0],  struct stat *statbuf))
		{
			fullpath = check_file_in_path(args[0],  struct stat *statbuf);
			if (!fullpath)
			{
				perror("Error (file status)");
				free_vector(args, no_of_args);
				continue;
			}
			else
			{
				free(args[0]);
				args[0] = fullpath;
			}
		}
		wpid = fork();
		if (wpid == -1)
			frokerr();
		if (wpid == 0)
			execute(args, no_of_args, env);
		if (waitpid(wpid, &wstatus, 0) == -1)
			waiterr();
		free_vector(args, no_of_args);
	}
	free(buff);
	return (0);
