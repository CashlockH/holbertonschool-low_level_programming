#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - it is used to create the array using malloc
 * @size: the size of the array
 * @c: the character with which we fill the array
 * Return: the pointer that holds the adress of desired string
 */
char *create_array(unsigned int size, char c)
{
	char *final_array = malloc(sizeof(c) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	for (; i < size ; i++)
	{
		final_array[i] = c;
	}
	return (final_array);
}
