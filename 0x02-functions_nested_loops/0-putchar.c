#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char c[] = "_putchar";
	int length = strlen(c);

	for (int i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
