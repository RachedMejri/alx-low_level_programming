#include "main.h"

/**
 *_strlen_recursion - does similar thing to strlen
 * @s: al chaine
 *
 * Return: return the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	else
		return (0);
}
