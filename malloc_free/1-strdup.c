#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - it duplicates the string using malloc
 * @str: string will be copied
 * Return: pointer that holds the duplicated string
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	new_str = malloc(length + 1);
	while (i < length)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
