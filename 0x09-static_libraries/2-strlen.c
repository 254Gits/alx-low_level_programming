#include "main.h"

/**
 *_strlen - Swaps the values of two integers
 *
 *@ len: The length of the string
 *@s: pointer to s
 *
 *Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
