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
	char *new_str = malloc(sizeof(char) * 50);

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
