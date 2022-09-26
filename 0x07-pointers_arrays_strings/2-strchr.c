#include "main.h"
#include <string.h>

/**
 * _strchr - first occurence
 * @s: param1
 * @c: param2
 * Return: first occurence
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
