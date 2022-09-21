#include "main.h"

/**
 * _strcat - concanete string
 * @dest: string 1
 * @src: string 2
 *
 * Retrun: string
 */
char *_strcat(char *dest, char *src)
{
	char *temp;
       
	temp = strcat(*dest,*src);

	return (temp);
}
