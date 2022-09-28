#include "main.h"
#include <math.h>

/**
 * findSQRT - fun
 * @num: int
 * Return: val
 */

int findSQRT(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (findSQRT(num, root + 1));
}


/**
 * _sqrt_recursion - find sqrt
 * @n: num
 * Return: ans
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (findSQRT(n, root));
}
