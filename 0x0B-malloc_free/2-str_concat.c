#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat- entry point
  * @s2: character pointer
  * @s1: charcter pointer
  *
  * Return: NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	result = (char *)malloc(sizeof(char) * (i + j + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}

	result[i + j] = '\0';
	return (result);
}

