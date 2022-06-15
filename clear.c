#include "simple_shell.h"

/**
 * clear - clears the command prompt for new commands
 * @argv: pointer to pointer of arg variables
 * @my_envp: double pointer to env variable
 * Return: void
 */

void clear(char **argv __attribute__((unused)), char **my_envp)
{
	(void)my_envp;
	if (fork() == 0)
	{
		exit(1);
	} else
	{
		wait(NULL);
	}
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "(╯°□°)╯︵ ┻━┻ ===| ", 34);
	fflush(stdout);
}
