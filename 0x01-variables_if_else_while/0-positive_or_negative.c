#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * main - entery point
 *
 * Description: to check if the number is positive negative or zero
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is negative", n);
	}
	else if (n < 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}
