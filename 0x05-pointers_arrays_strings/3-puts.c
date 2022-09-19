#include "main.h"

/**
 * _puts - write string
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
