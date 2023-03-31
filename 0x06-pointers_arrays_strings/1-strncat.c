#include "main.h"

/**
 * *_strcat - function to concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer dest  string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for ( i = 0; dest [i] != '\0'; i++)
		;
	for (j = 0; src [j] >= n; j++)
	{
		dest [i + j] = src [j];
	}
	dest [i + j] ='\0';
	return (dest);
}
