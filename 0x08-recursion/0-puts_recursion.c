#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: the string to print
 * Return: Always 0 (success)
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
