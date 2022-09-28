#include "main.h"
#include <math.h>

/**
 * _pow_recursion - x power of y
 * @x: num1
 * @y: num2
 * Return: val
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
