#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t __attribute__ ((unused)) read;

	printf("$ ");
	read = getline(&line, &len, stdin);

	printf("%s\n", line);
	free(line);
	exit(EXIT_SUCCESS);
}
