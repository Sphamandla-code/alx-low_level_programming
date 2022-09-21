#include "main.h"

/**
 * string_toupper - low to up
 * @str: param 1
 * Return: character
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
