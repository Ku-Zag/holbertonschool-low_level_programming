#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initilaize
 * @d: pointer to dog
 * @name: pointer to dog name
 * @age: ptr to dog age
 * @owner: ptr to dog owner
 * Description: initilazation
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}