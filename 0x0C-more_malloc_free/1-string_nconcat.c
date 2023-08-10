#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - allocates memory using malloc
 * @s1: first chain
 * @s2: second chain
 * @n: how much to take from the sec
 *
 * Return: chain
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int long1, long2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	long1 = strlen(s1);
	long2 = strlen(s2);
	if (n >= long2)
		n = long2;

	concat = malloc(sizeof(char) * (long1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < long1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
