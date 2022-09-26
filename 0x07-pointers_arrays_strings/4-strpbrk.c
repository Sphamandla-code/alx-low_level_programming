#include "main.h"
#include <string.h>

/**
 * _strpbrk - search string
 * @s: param1
 * @accept: param2
 * Return: val
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	tmp = strpbrk(s, accept);

	return (tmp);
}
