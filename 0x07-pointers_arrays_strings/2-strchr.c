/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: string.
 * @c: chniya 7arf.
 *
 * Return: raj3 cor 8iro raj3 null.
 */


char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
