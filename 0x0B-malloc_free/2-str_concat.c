#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to dup
 * @s2: string to dupn
 *
 * Return: pointer to a newly allocated space
 * or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int long1 = 0, long2 = 0, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[long1])
		long1++;
	while (s2[long2])
		long2++;

	concat = malloc((long1 + long2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (x = 0; x < long1; x++)
		concat[x] = s1[x];
	for (y = 0; y <= long2; y++)
		concat[x + y] = s2[y];

	return (concat);
}
