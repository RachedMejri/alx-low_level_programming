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

	va_start(args, n);

	int sum = 0;

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	for (unsigned int i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);
	return (sum);
}
