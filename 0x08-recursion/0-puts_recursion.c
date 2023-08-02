#include "main.h"
#include <string.h>


/**
 * _puts_recursion - print the whole string only using recursin
 * @s: al chaine
 *
 * Return: print al charter
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
