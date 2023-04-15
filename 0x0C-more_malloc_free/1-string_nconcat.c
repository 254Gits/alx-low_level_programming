#include <stdlib.h>
#include "main.h"

/**
  string_nconcat - entry point
  *
  * @s1: character pointer 1
  * @s2: character pointer 2
  * @n:interger
  *
  *
  * Return: pointer of s
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	char *s;
	char len;

	len = char *s1;
	s1++;

	if (n >= len)
	{

	s =(char*) calloc(s1,n *sizeof(char));
	
	if (s = NULL)
	{
		return (NULL);
	}
	free(s);
	}
	return (s);
}
