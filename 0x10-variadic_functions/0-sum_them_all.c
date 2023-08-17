#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of integers
 * @...: the integers
 *
 * Return: the sum of the numbers or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);
	return (sum);
}
