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
	int name_length = strlen(name) + 1;
	int owner_length = strlen(owner) + 1;
	int i;
	dog_t *nese;

	nese = malloc(sizeof(dog_t));
	if (nese == NULL)
	{
		free(nese);
		return (NULL);
	}
	nese->name = malloc(sizeof(name_length));
	if (nese->name == NULL)
	{
		free(nese->name);
		return (NULL);
	}
	nese->owner = malloc(sizeof(owner_length));
	if (nese->owner == NULL)
	{
		free(nese->owner);
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
