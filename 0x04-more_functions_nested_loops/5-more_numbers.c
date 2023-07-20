#include "main.h"
/**
 * more_numbers - prints from 0 to 9 except 2 4
 *
 *
 * Return: the multiplication of both a and b
 */

void more_numbers(void)
{
	int i;
	int j;
	int first_num;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			first_num = j;

			if (j > 9)
			{
				_putchar(49);
				first_num= first_num - 10;
			}
			_putchar(first_num + 48);
		}

		_putchar('\n');
	}



}
