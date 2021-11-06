#include <stdio.h>
#include "dog.h"
/**
 * init_dog - that initialize a variable of type struct dog
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
	if (!d)
	return;
}
