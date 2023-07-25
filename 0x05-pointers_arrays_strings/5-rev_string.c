#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{

	char other;

	int len = strlen(s);
	int x = 0;
	int y = len - 1;

	while (x < y)
	{
		other = s[x];
		s[x] = s[y];
		s[y] = other;
		x++;
		y--;
	}
}
