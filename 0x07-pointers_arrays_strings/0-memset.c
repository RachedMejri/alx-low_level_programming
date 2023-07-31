#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: chinya n3bi
 * @b: bac bich n3bi
 * @n: 9dh bich n3bi
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
