#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: the task will tell you
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int x = n % 10;

	if (x < 6)
		printf("%d and is less than 6 and not 0", x);
	else if	(x == 0)
		printf("%d and is 0", x);
	else
		printf("%d and is greater than 5", x);
	return (0);
}
