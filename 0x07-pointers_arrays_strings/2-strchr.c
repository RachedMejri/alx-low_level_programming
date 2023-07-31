#include "main.h"

/**
 * _strchr - li3tiholi
 * @s: The string to search in.
 * @c: The character to locate.
 * new comment lol
 * Return: chaine
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
