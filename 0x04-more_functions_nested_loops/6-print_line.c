#include "main.h"

/**
 * print_line - line printing
 *
 * @n: number
 *
 * print a line of underscores n times
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
