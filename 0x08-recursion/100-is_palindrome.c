#include "main.h"

/**
 * check_palindrome - Checks if palindrome.
 * @s: string .
 * @len: length of s.
 * @index: index of the string.
 *
 * Return: 1 or 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string
 * Return: 0 - 1
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
