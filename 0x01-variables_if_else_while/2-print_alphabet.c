# include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0(Succes)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
