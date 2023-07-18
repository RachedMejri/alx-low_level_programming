#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[] = "_putchar\n";
	int length = strlen(text);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
