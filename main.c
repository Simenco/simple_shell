#include "simple_shell.h"

/**
 * handle_signal - this function handles the signal
 * @signo: the signal
 * Return: void
 */

void handle_signal(int signo __attribute__((unused)))
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n(╯°□°)╯︵ ┻━┻ ===| ", 35);
	fflush(stdout);
}

/**
 * checkmalloc - check memory allocation
 * @str: string
 * Return: void
 */

void checkmalloc(char *str)
{
	if (!str)
	{
		exit(1);
	}
}

/**
 * main - the simple shell main function
 * @argc: argument count
 * @argv: string input
 * @envp: environment variable
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[], char *envp[])
{
	int index, _get = get_char();
	char *pathstr, *tmp;
	static char *my_envp[100], *search_path[10], *my_argv[100];

	tmp = (char *)malloc(sizeof(char) * 100);
	pathstr = (char *)malloc(sizeof(char) * 256);
	checkmalloc(pathstr);
	checkmalloc(tmp);
	signal(SIGINT, SIG_IGN);
	signal(SIGINT, handle_signal);
	copy_envp(envp, my_envp);
	get_path_string(my_envp, pathstr);
	insert_pathstr_to_search(pathstr, search_path);
	clear(argv, my_envp);
	while (_get != EOF)
	{
		if (_get == '\n')
		{
			if (tmp[0] == '\0' && isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "(╯°□°)╯︵ ┻━┻ ===| ", 34);
			else
			{
				run_shell(my_argv, my_envp, search_path, tmp);
				if (isatty(STDIN_FILENO))
					write(STDOUT_FILENO, "(╯°□°)╯︵ ┻━┻ ===| ", 34);
			}
			_memset(tmp, 0, 100);
		}
		else
			_strcat(tmp, _get);
	}
	free(tmp);
	free(pathstr);
	for (index = 0; my_envp[index] != NULL; index++)
		free(my_envp[index]);
	for (index = 0; search_path[index] != NULL; index++)
		free(search_path[index]);
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	return (0);
}
