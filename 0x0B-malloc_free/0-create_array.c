#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars
 * @size: kbor al array
 * @c: charter
 *
 * Return: a pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}