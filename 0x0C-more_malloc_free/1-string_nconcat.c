#include <stdlib.h>
#include "main.h"

/**
  *string_nconcat - entry point
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
	char *p;
	unsigned int i = 0, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	p = malloc(sizeof(char) * (n + i + 1));
	if (!p)
		return (NULL);

	i = 0;

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[j] && j < n)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';

	return (p);
}
