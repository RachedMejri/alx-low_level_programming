#include "main.h"

/**
 * _strspn - ta3rf a toul
 * @s: string li nfrxo.
 * @accept: string li faha al accepet.
 *
 * Return: raj3 nomro mt3 al bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int fir, sec, count = 0;

	for (fir = 0; s[fir]; fir++)
	{
		for (sec = 0; accept[sec]; sec++)
		{
			if (s[fir] == accept[sec])
			{
				count++;
				break;
			}
		}
		if (!accept[sec])
			break;
	}

	return (count);
}
