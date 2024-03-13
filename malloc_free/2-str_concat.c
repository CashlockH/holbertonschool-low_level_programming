#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * length_finder - finds the length of the string pointer
 * @a: string pointer of which the length should be found
 * Return: the length of the string pointer
 */
int length_finder(char *a)
{
	int i  = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - concatanate two strings
 * @s1: the first string pointer
 * @s2: the second string pointer
 * Return: final pointer
 */
char *str_concat(char *s1, char *s2)
{
	int length_s1;
	int length_s2;
	int length;
	int i = 0;
	char *final_string;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	length_s1 = length_finder(s1);
	length_s2 = length_finder(s2);
	length = length_s1 + length_s2;
	final_string = malloc(length + 1);
	if (final_string == NULL)
	return (NULL);
	while (i <= length_s1)
	{
		final_string[i] = s1[i];
		i++;
	}
	i--;
	while (i - length_s1 <= length_s2)
	{
		final_string[i] = s2[i - length_s1];
		i++;
	}
	final_string[i] = '\0';
	return (final_string);
}
