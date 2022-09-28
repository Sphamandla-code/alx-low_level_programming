#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - find sqrt
 * @n: num
 * Return: ans
 */
int _sqrt_recursion(int n)
{
	double tmp, ans;

	tmp = double(n);
	ans = sqrt(tmp);

	return (ans);
}
