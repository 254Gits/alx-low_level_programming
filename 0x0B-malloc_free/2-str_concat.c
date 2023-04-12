#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat- entry point
  * @s2: character pointer
  * @s1: charcter pointer
  *
  * Return: NULL
  */
char* str_concat(char* s1, char* s2)
{
	int len1 = 0, len2 = 0;
	char *p, *res;
	while (s1[len1]) len1++;
	while (s2[len2]) len2++;
	
	res = (char*)malloc(len1 + len2 + 1);
	if (!res) return (NULL);
	
	p = res;
	while (*s1) *p++ = *s1++;
	while (*s2) *p++ = *s2++;
	*p = '\0';
	
	return (res);
}
