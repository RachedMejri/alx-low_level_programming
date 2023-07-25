#include "main.h"

/**
 * _strcpy - copier min w7da lil lo5ra
 * @dest: second array
 * @src: the one to be copied.
 *
 * Return: the second dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
