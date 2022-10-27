#include "main.h"

/**
 * print_binary - print binray representation
 * @n: num1
 * Return: man
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
