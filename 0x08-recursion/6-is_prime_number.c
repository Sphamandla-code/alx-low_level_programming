#include "main.h"

/**
 * is_prime_number - check prime
 * @n: int
 * Return: val
 */
int is_prime_number(int n)
{
	int i, c;

	c = 0;

	for (i = 1; i <=n; i++)
	{
		if (n % i == 0)
			c++;
	}

	if (c == 2)
		return (1);
	else
		return (-1);
}
