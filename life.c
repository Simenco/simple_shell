#include <stdio.h>

int main (void)
{
	char *name;
	int age;

	printf("pls enter your name:");
	scanf("%s", &name);
	printf("how old are you?");
	scanf("%d", &age);
	printf("%s is %d years old.\n", name, age);

	return (0);
}

