#include "main.h"

/**
 * _memcpy - Fills memory with a constant byte.
 * @dest: chinya n3bi
 * @src: bac bich n3bi
 * @n: 9dh bich n3bi
 *
 * Return: Pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
