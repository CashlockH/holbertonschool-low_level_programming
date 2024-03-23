#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that inserts parameters to structure variable
 * @name: the name of the structer variable
 * @owner: the owner of the structer variable
 * @age: the age value of the structer variable
 * Return: the pointer that holds the adress of the structer variable
 * On error NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = 0;
	int owner_length = 0;
	int i;
	dog_t *nese;

	i = 0;
	while (name[i] != '\0')
	{
		name_length++;
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		owner_length++;
		i++;
	}
	nese = malloc(sizeof(dog_t));
	if (nese == NULL)
	{
		return (NULL);
	}
	nese->name = malloc(sizeof(name_length));
	if (nese->name == NULL)
	{
		free(nese);
		return (NULL);
	}
	nese->owner = malloc(sizeof(owner_length));
	if (nese->owner == NULL)
	{
		free(nese);
		free(nese->name);
		return (NULL);
	}
	i = 0;
	while (i <= owner_length)
	{
		nese->owner[i] = owner[i];
		i++;
	}
	i = 0;
	while (i <= name_length)
	{
		nese->name[i] = name[i];
		i++;
	}
	nese->age = age;
	return (nese);
}
