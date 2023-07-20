#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if it's upper
 *
 * @c: al carcter
 *
 * Return: On success, returns 1.
 *         On error, returns 0.
 */

int _isupper(int c)
{

	if (isupper(c))
		return (1);
	else
		return (0);
}
