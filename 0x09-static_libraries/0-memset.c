#include "main.h"

/**
 *_memset - copies character b to  first s pointer
 *@s:pointer of memory area
 *@b: constant byte
 *@n : unsigned interger
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
