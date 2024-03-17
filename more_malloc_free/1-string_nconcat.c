#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_length - ad
 * @s: asfd
 * Return: asdf
 */
int str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - asdf
 * @s1:adg
 * @s2:asasfa
 * @n:asdfasfd
 * Return:a
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *p;
	unsigned int a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = str_length(s1);
	j = str_length(s2);
	if (n >= j)
		n = j;
	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);
	j = 0;
	for (; a < i + n ; a++)
	{
		if (a < i)
			p[a] = s1[a];
		else
		{
			p[a] = s2[j];
			j++;
		}
	}
	p[a] = '\0';
	return (p);
}
