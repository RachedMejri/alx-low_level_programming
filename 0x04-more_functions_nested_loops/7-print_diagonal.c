#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 *
 * If n is 0 or less, the function only prints '\n'.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spaces = 0;

		while (spaces < n)
		{
			int i;

			for (i = 0; i < spaces; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			spaces++;
		}
	}
}
