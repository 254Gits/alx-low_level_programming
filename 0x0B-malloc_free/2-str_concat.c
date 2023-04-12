#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat- entry point
  * @s2: character pointer
  * @s2: charcter pointer
  *
  * Return: NULL
  */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j = 0;
	char *result;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}

	result[i + j] = '\0';
	return (result);
}
