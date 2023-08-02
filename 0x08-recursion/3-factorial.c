#include "main.h"

/**
 *factorial - calcultes the fact of a number
 * @n: al nmbre
 *
 * Return: return the factorial of a number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * (factorial(n - 1)));
}
