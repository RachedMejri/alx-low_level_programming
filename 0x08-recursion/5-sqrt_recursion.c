#include "main.h"

/**
 * OldWayCal - calcule the square root the old way
 * @nom: al nmbre
 * @fac: al fac
 * Return: the square root
 */
int OldWayCal(int nom, int fac);

/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: al nmbre
 *
 * Return: return square root of a number if the square root is a nat number
 *                 else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (OldWayCal(n, 2));
}

/**
 * OldWayCal - calcule the square root the old way
 * @nom: al nmbre
 * @fac: al fac
 * Return: the square root
 */
int OldWayCal(int nom, int fac)
{
	if (nom == fac)
		return (-1);
	else if (fac * fac == nom)
		return (fac);
	else
		return (OldWayCal(nom, fac + 1));
}
