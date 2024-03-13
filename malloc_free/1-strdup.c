#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - it duplicates the string using malloc
 * @str: string will be copied
 * Return: pointer that holds the duplicated string
 */
char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *new_str = malloc(sizeof(str));

	if (new_str == NULL)
	{
		return (NULL);
	}
	while (i <= sizeof(str))
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
