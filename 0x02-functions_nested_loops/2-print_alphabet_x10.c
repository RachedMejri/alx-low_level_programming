#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int letter;
	int counts;

	for (counts = 1; counts <= 10; counts++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

