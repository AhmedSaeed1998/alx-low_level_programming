#include "main.h"

/**
 * Puts2 - prints every chracter of a string
 *
 * @str: sring parameter input
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
