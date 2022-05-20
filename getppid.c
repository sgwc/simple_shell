#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t ppid;
	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
