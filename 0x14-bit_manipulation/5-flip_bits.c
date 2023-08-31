#include "main.h"
/**
 * flip_bits - too long to write the task but task 5
 * @n: numberone(mohamedramadan)
 * @m: thewholeworld
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int changer = n ^ m, counter = 0;

	while (changer)
	{
		counter += changer & 1;
		changer >>= 1;
	}
	return (counter);
}
