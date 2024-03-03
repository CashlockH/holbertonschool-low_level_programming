#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Short description
 * @d: First member
 * @name: Second member
 * @age: sdfa
 * @owner: asdjfh
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf("%s", "Ok");
return;
}
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
