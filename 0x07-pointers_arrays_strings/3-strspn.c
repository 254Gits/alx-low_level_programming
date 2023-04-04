#include "main.h"


/**
 * *_strspn - returns index of first character
 * @s: pointer to the string
 * @accept:bytes store
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	while (s == accept)
	{
		return (*accept);
	}
	return (0);
}
