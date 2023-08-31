#include "main.h"
/**
 * binary_to_uint - from 2 to 10
 * @b: string containig bianary
 * Return: 0 if not bianary or null or number if ligit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tenbase = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		tenbase = tenbase * 2 + (*b++ - '0');
	}
	return (tenbase);
}
