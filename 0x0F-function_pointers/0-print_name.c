#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f pointer to the function
 */
void pirnt_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
