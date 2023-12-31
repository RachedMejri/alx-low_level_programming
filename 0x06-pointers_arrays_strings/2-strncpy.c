#include "main.h"

/**
 * _strncpy - Copies a string from src to dest, using at most n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes from src to be copied.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}


	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
