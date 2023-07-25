#include "main.h"

/**
 * puts2 - prints a string if i 2 followed by a new line
 * @str: pointer to the string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
