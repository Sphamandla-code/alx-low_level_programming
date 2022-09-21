#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	retun (dest);
}
