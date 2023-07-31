#include "main.h"

/**
 * _strpbrk - nfs al 7aja
 * @s: al string
 * @accept: nfs 7aja mara o5ra
 *
 * Return: copy coller li defecntion mt3 function
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                return (s + i);
        }
    }

    return ('\0');
}
