#include "main.h"

/**
 * print_triangle - 5dimto fi awl 3am lol
 * @size: size of the triangle
 *
 * print trin ta mir ta ta ra ta ta
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y;
		int x;

		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size - x; y++)
				_putchar(' ');

			for (y = 1; y <= x; y++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
