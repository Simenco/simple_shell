#include "simple_shell.h"

void shell_prompt(void)
{
	write(1, "$ ", 2);
}

void shell_prompt1(void)
{
	write(1, "> ", 2);
}

