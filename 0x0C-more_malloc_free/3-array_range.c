#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: a9al 7aja fiki ya array
 * @max: akbar 7aja fik ya array
 *
 * Return: pointer to the newly created array, or NULL if function fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, kobr;

	if (min > max)
		return (NULL);

	kobr = max - min + 1;
	arr = malloc(sizeof(int) * kobr);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < kobr; i++)
		arr[i] = min + i;

	return (arr);
}
