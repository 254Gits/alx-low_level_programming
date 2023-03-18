# include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0(Succes)
 */
int main(void)
{
	char alphabet = 'a';
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
