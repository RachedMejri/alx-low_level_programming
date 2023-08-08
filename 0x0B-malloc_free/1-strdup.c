#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated space
 * @str: string to dup
 *
 * Return: pointer to the newly allocated space containing the dupd string
 * or NULL e
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
