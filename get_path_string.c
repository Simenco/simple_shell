#include "simple_shell.h"

/**
 * get_path_string - gives tokenizedstring with delimiter
 * @tmp_envp: pointer to pointer environment
 * @bin_path: binary path
 * Return: void
 */

void get_path_string(char **tmp_envp, char *bin_path)
{
	int count = 0;
	char *tmp;

	while (1)
	{
		tmp = _strstr(tmp_envp[count], "PATH");
		if (tmp == NULL)
		{
			count++;
		} else
			break;
	}
	_strncpy(bin_path, tmp, _strlen(tmp));
}
