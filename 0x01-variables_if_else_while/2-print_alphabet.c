#include <stdio.h>
/**
 * main - entery point
 *
 * Description: working to print
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}