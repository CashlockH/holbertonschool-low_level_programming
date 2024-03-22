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
	dog_t *nese;

	nese = malloc(sizeof(dog_t));
	if (nese == NULL)
		return (NULL);
	nese->name = name;
	nese->owner = owner;
	nese->age = age;
	return (nese);
}
