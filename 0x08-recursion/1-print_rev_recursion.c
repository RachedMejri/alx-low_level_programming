#include "main.h"

/**
 *_print_rev_recursion - print the whole string only using recursin in reverse
 * @s: al chaine
 *
 * Return: print al charter in reverse
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else if (*s == '\0')
	{
		return;
	}
}
