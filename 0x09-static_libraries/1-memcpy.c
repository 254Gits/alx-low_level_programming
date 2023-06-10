#include "main.h"

/**
 *_memcpy - copies character of pointer src to dest
 *@src: memory area to be copied from
 *@dest: poiner where src will be copied to
 *@n: maximum amount of bytes
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
