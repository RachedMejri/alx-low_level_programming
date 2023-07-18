#include "main.h"
#include <string.h>

/**
 * print_alphabet - writes the whole alphabet
 */

void print_alphabet(void)
{

	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int length = strlen(alpha);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(alpha[i]);
	}
}

