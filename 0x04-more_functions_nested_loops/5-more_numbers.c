#include "main.h"
/**
 * more_numbers - print alot of numbers
 *
 *
 * Return: from 0 to 14 10 times
 */

void more_numbers(void)
{

	int x;
	int y;
	int a;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14 ; y++)
		{

			a = y;
			if (y > 9)
			{
				_putchar(1 + 48);
				a = y % 10;
			}
			_putchar(a + 48);
		}
		_putchar('\n');

	}

}
