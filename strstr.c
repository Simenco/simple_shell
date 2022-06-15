#include "simple_shell.h"

/**
 * _strstr - function strstr
 * @haystack: the stack string
 * @needle: needle string
 * Return: a pointer to a string
 */

char *_strstr(char *haystack, char *needle)
{
	int flag, sentence, word;

	if (needle[0] == '\0')
		return (haystack);
	flag = 0;
	for (sentence = 0; haystack[sentence] != '\0'; sentence++)
	{
		for (word = 0; needle[word] != '\0'; word++)
		{
			if (haystack[sentence + word] != needle[word])
			{
				flag = 0;
				break;
			}
			flag = 1;
		}
		if (flag)
			return (haystack + sentence);
	}
	return ('\0');
}
