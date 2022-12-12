#include "main.h"
#include <string.h>
/**
 * _memset - fill memory
 * @s: param1
 * @b: param2
 * @n: param3
 *
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
