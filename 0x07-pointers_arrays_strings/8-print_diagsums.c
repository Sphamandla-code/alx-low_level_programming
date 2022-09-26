#include "main.h"

/**
 * print_diagsums - sum of arrays
 * @a: arrary
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
