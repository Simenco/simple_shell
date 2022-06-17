#include "simple_shell.h"

/**
 * remove_spaces - function removes spaces in text
 * @text: string from which spaces will be removed
 * Return: 1 on success
 */

char *remove_spaces(char *text)
{
	int i, j;

	int len = _strlen(text);
	for (i = 0; i < len; i++)
	{
		if (text[i] == ' ')
		{
			for (j = i; j < len; j++)
			{
				text[j] = text[j + 1];
			}
			len--;
		}
	}
	return (text);
}

/**
 * fill_argv - function that fills the argv
 * @tmp_argv: string temp_argv
 * @my_argv: argv
 * Return: void function
 */

void fill_argv(char *tmp_argv, char **my_argv)
{
	char *copy_argv;
	int index = 0;
	char ret[100];

	copy_argv = remove_spaces(tmp_argv);
	_memset(ret, 0, 100);
	while (*copy_argv != '\0')
	{
		if (index == 10)
			break;
		if (*copy_argv == ' ')
		{
			if (my_argv[index] == NULL)
				my_argv[index] = (char *)malloc(sizeof(char) * _strlen(ret) + 1);
			else
			{
				_memset(my_argv[index], 0, _strlen(my_argv[index]));
			}
			_strncpy(my_argv[index], ret, _strlen(ret));
			_strncat(my_argv[index], "\0", 1);
			_memset(ret, 0, 100);
			index++;
		} else
		{
			_strncat(ret, copy_argv, 1);
		}
		copy_argv++;
	}
	my_argv[index] = (char *)malloc(sizeof(char) * _strlen(ret) + 1);
	if (!my_argv[index])
		free(my_argv);
	_strncpy(my_argv[index], ret, _strlen(ret));
	_strncat(my_argv[index], "\0", 1);
}
