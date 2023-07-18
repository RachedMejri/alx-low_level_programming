#include "main.h"

/**
 * print_sign - Prints the alphabet in lowercase 10 times
 *
 * @n: al carcter
 *
 * Return: On success, returns 1.
 *         On 0, returns 0.
 *			On -, returns -1.
 */

int print_sign(int n)
{

	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
