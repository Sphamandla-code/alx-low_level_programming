#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
