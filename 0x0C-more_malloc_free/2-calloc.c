#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: chniya
 * @size: 9adh
 *
 * Return: pointer to allocated memory, or NULL if function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		p[i] = 0;

	return (p);
}
