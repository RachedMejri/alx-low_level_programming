#include "main.h"
/**
 * set_bit - set value of a single bit
 * @n: number set
 * @index: indx
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
