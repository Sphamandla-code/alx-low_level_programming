#include "main.h"

/**
 * malloc_checked - use malloc
 * @b: bytes
 * Return: pointer
 */
void **malloc_checked(unsigned int b)
{
	void *res = malloc(b);
	
	if (res == NULL)
		exit(98);

	return (res);
}
