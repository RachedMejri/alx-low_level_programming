#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - get the sum of numbers given to the function
 *
 * @n: the number of number
 * @... : the ints
 *
 * Return: the sum of the numbers
 *  or 0 if n=0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum = 0;

	if (n == 0)
		return (0);

	for (int i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	return (sum);
}
