#include <stdio.h>

/**
 * main - check the program
 *
 * Return - Always 0.
 */
int main(int __attribute__ ((unused)) ac, char **av)
{
	int i, argc;

	argc = sizeof(av) / sizeof(char **);

	i = 0;
	while (av != NULL && i < argc)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
