#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - frees the allocated memory for the pointer to structure
 * @d: the pointer to the structure
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
