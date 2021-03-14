#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: name of new instance of dog structur.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
