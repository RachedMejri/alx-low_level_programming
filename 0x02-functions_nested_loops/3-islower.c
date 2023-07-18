#include "main.h"
#include <ctype.h>
/**
 * _islower - Prints the alphabet in lowercase 10 times
 *
 * @c: al carcter
 *
 * Return: On success, returns 1.
 *         On error, returns 0.
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
