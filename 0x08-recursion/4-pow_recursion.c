#include "main.h"

/**
 *_pow_recursion - calculet the power of x to y
 * @x: al nmbre
 * @y: al 9owa
 *
 * Return: return the power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));
}
