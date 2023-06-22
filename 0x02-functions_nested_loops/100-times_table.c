#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void Print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
