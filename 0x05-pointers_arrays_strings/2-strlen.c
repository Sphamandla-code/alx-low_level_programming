#include "main.h"

/**
 * _strlen - lenght of string
 * @s: string
 *
 * Return: size
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
