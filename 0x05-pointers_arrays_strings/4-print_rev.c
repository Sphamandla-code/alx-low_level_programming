#include "main.h"

/**
 * print_rev - string in rev
 * @s: the string
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[i++])
		len++;

	for(i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
