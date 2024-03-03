#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Short description
 * @d: First member
 *
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
else
{
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
