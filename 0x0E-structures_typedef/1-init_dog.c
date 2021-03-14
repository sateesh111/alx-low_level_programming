#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable
 * @d: pointer to struct dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
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
