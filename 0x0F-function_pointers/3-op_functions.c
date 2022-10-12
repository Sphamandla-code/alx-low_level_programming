#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum.
 * @a: numb1.
 * @b: num2.
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of numbers.
 * @a: num1.
 * @b: num.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of numbers.
 * @a: num.
 * @b: num.
 *
 * Return: product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of numbers.
 * @a: num.
 * @b: num.
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of numbers.
 * @a: num.
 * @b: num.
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
