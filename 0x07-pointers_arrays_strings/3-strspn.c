#include "main.h"
#include <string.h>

/**
 * _strspn - length prefix
 * @s: param1
 * @accept: param2
 */
unsigned int _strspn(char *s, char *accept)
{
 	int len;

	len = strspn(s, accept);

	return (len);
}
