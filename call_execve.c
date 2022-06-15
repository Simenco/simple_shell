#include "simple_shell.h"

/**
 * call_execve - calls execve to run other processes
 * @cmd: command
 * @my_envp: environment variable
 * @my_argv: command line arguments
 * Return: void
 */

void call_execve(char *cmd, char **my_envp, char **my_argv)
{
	int i;

	if (fork() == 0)
	{
		i = execve(cmd, my_argv, my_envp);
		if (i < 0)
		{
			write(STDERR_FILENO, cmd, _strlen(cmd));
			write(STDERR_FILENO, ": not found\n", 13);
			exit(1);
		}
	} else
	{
		wait(NULL);
	}
}
