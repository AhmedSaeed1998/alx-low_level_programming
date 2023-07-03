#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src : source
 * @n: length of source to be copied
 *  Return: the poiter to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < m; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
