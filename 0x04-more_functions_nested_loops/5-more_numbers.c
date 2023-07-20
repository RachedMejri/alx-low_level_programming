#include "main.h"
/**
 * more_numbers - prints from 0 to 9 except 2 4
 *
 *
 * Return: the multiplication of both a and b
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; i < 14 ; i++)
		{
			if (j > 9)
				_putchar(49);
			_putchar(48 + (j % 10));
		}
		_putchar("\n");
	}
}
