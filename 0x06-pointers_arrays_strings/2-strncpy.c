#include "main.h"
#include "string.h"

/**
 * _strncpy - for copying purpose
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
