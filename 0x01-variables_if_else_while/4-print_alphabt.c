# include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0(Succes)
 */
int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
