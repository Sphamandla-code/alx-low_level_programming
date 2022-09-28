#include "main.h"

/**
 * factorial - facto of num
 * @n: number
 * Return: facto
 */
int factorial(int n)
{
	int i = n;

	if(n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	i *= factorial(n - 1);

	return (i);
}
