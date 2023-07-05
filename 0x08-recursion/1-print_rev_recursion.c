#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to reverse
 * Return: always 0 (success)
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	putchar(*s);
}
