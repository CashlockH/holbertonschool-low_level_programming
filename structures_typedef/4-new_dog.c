#include <stdio.h>
#include <stdlib.h>
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
	char n_name[100];
	char n_owner[100];
	int i;
	dog_t *nese;

	nese = malloc(sizeof(dog_t));
	if (nese == NULL)
	{
		free(nese);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		n_name[i] = name[i];
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		n_owner[i] = owner[i];
		i++;
	}
	nese->name = n_name;
	nese->owner = n_owner;
	nese->age = age;
	return (nese);
}
