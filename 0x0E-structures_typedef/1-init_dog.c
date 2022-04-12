#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a varrriable of type struct dog
 * @d: array
 * @age: age
 * @owner: owner
 * Description: this struct is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
