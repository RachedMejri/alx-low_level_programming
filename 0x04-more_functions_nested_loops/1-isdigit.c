#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if it's upper
 *
 * @c: al carcter
 *
 * Return: On success, returns 1.
 *         On error, returns 0.
 */

int _isdigit(int c)
{

	if (isdigit(c))
		return (1);
	else
		return (0);
}
