#include <stdio.h>
/**
 *main - entry point
 *
 *Description: to check if the number is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
