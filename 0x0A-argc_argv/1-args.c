#include <stdio.h>

/**
 * main - number of arguments
 * @argc: arguments 
 * @argv: pointers to arguments.
 *
 * Return: 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
