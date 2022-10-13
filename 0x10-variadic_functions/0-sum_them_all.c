#include "variadic_functions.h"

/**
 * sum_them_all - summ all params
 * @n: number of param
 * @...: var number
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list nums;
	unsigned int index, sum = 0;

	var_start(num, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
