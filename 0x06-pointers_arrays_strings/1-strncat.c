#include "main.h"

/**
 * *_strcat - function to concatenate to the maximum value of n
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes
 * Return: pointer dest  string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
