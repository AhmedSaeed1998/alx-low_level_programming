#include "mian.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max byte to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned it n)
{
	unsigned int utr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

return (s);
}
