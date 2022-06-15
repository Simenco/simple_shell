#include "simple_shell.h"

/**
 * attach_path - this function attach path
 * @cmd: command
 * @search_path: pointer to pointer
 * Return: 0 or 1
 */

int attach_path(char *cmd, char **search_path)
{
	char ret[100];
	int index;
	int fd;

	_memset(ret, 0, 100);
	for (index = 0; search_path[index] != NULL; index++)
	{
		_strncpy(ret, search_path[index], _strlen(ret));
		_strncat(ret, cmd, _strlen(cmd));
		fd = open(ret, O_RDONLY);
		if (fd > 0)
		{
			_strncpy(cmd, ret, _strlen(ret));
			close(fd);
			return (0);
		}
	}
	return (0);
}
