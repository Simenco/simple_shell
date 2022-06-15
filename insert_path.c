#include "simple_shell.h"

/**
 * insert_pathstr_to_search - tokenize paths for searching operation
 * @pathstr: pointer to path
 * @search_path: pointer to pointer
 * Return: void
 */

void insert_pathstr_to_search(char *pathstr, char **search_path)
{
	int index = 0;
	char *tmp = pathstr;
	char ret[100];

	while (*tmp != '=')
		tmp++;
	tmp++;

	while (*tmp != '\0')
	{
		if (*tmp == ':')
		{
			_strncat(ret, "/", 1);
			search_path[index] = (char *) malloc(sizeof(char) * (_strlen(ret) + 1));
			_strncat(search_path[index], ret, _strlen(ret));
			_strncat(search_path[index], "\0", 1);
			index++;
			_memset(ret, 0, 100);
		} else
		{
			_strncat(ret, tmp, 1);
		}
		tmp++;
	}
}
