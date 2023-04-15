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
	char *t;
	unsigned int k, j;
	int i;

	t = malloc(sizeof(s1) + sizeof(char) * (n + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			t[i] = s1[i];
			i++;
		}
		j = 0;

		while (s2[j] != '\0')
		{
			j++;
		}
		if (n >= j)
		{
			n = j;
		}

		k = 0;
		while (k < n)
		{
			t[i + k] = s2[k];
			k++;
		}
		t[i + k] = '\0';
		return (t);
	}
	free(t);
}
