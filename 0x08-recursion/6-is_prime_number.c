#include "main.h"
#include <stdlib.h>

/**
 * OldWayCal - check if the number is prime number
 * @nom: al nmbre
 * @fac: al fac
 *
 * Return: return 1 if the number is prime, else 0
 */
int OldWayCal(int nom, int fac);

/**
 * is_prime_number - check if the number is prime number
 * @n: al nmbre
 *
 * Return: return 1 if the number is prime, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (OldWayCal(n, 2));
}

/**
 * OldWayCal - check if the number is prime number
 * @nom: al nmbre
 * @fac: al fac
 *
 * Return: return 1 if the number is prime, else 0
 */
int OldWayCal(int nom, int fac)
{
	if (nom == fac)
		return (1);

	if (nom % fac == 0)
		return (0);

	return (OldWayCal(nom, fac + 1));
}
