/**
 * main - entry point
 *
 *Description: to check if the number is positive, negative, or zero
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}

