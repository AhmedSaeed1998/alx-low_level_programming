#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src : input
 * @n: input
 *  Return: the poiter to dest
*/
char *_memcpy(char *dest, char *src, insugned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
