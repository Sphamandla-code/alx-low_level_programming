#include <stdio.h>

/**
 * main - Prints arguments
 * @argc: arguments.
 * @argv: pointers.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
