#include "simple_shell.h"

/**
 * print_crab - function to print shell logo
 *
 * Return: void
 */

void print_crab(void)
{
	write(STDOUT_FILENO, "   /\\ \n", 9);
	write(STDOUT_FILENO, " ( /   @ @    ()   welcome\n", 29);
	write(STDOUT_FILENO, "  \\  | |  /     to\n", 23);
	write(STDOUT_FILENO, "   -/    \"    \\    soft\n", 24);
	write(STDOUT_FILENO, "  /-|         |-\\  shell\n", 26);
	write(STDOUT_FILENO, " / /-\\        /-\\\\ \n", 21);
	write(STDOUT_FILENO, "   / /-`---'-\\ \\ \n", 20);
	write(STDOUT_FILENO, "   /         \\ \\ \n\n", 21);
	write(STDOUT_FILENO, "\n(╯°□°)╯︵ ┻━┻ ===| ", 35);
}
