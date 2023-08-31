#include "main.h"
/**
 * get_bit - value of the index
 * @n: number
 * @index: number location
 * Return: the value of the indexid number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
