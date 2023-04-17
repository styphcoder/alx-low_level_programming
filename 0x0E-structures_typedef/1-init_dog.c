#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Program that initialize a variable.
 * @d : structure to initialize.
 * @name : name.
 * @age : age.
 * @owner: owner.
 * Return : Nothing.
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
