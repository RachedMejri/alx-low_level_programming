#include "main.h"
#include <string.h>

/**
 * print_rev - print the string in reverse
 * @s: pointer to the string to be printed in reverse
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
