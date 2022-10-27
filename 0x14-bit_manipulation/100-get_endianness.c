#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 or 1;
 */
int get_endianness(void)
{
	int num = 1;
	char *en = (char *)&num;

	if (*en == 1)
		return (1);

	return (0);
}
