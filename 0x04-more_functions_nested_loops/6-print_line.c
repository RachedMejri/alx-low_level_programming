#include "main.h"
/**
 * print_line - line printing
 *
 *@n: number
 *
 * print -
 */

void print_line(int n)
{

	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{

		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
