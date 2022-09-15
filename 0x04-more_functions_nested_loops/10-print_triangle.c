#include "main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int j, i;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size - j; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < j; i++)
				_putchar('#');

			if (j == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
