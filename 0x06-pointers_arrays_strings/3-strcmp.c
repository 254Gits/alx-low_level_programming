#include "main.h"

/**
 * _strcmp - function to compare two string s1 and s2
 * @s1: string one
 * @s2:string two
 * 
 * Return: differnce in ascii code
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
