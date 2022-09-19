#include "main.h"

/**
 * swap_int - swap pointer
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int chg = *a;
	*a = *b;
	*b = chg;
}
