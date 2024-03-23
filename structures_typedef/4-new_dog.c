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
	dog_t *nese;
	int name_length = 0, owner_length = 0, i;

	while (name[name_length] != '\0')
		name_length++;
	name_length++;
	while (owner[owner_length] != '\0')
		owner_length++;
	owner_length++;
	nese = malloc(sizeof(dog_t));
	if (nese == NULL)
		return (NULL);
	nese->name = malloc(sizeof(char) * name_length);
	if (nese->name == NULL)
	{
		free(nese);
		return (NULL);
	}
	nese->owner = malloc(sizeof(char) * owner_length);
	if (nese->owner == NULL)
	{
		free(nese);
		free(nese->name);
		return (NULL);
	}
	i = 0;
	while (i < name_length)
	{
		nese->name[i] = name[i];
		i++;
	}
	i = 0;
	while (i < owner_length)
	{
		nese->owner[i] = owner[i];
		i++;
	}
	nese->age = age;
	return (nese);
}
