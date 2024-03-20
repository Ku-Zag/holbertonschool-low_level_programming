#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints info bout dog
 * @d: pointer to dog
 * Description: doggy dooog()
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name : (nil)\n");
	else if (d->name != NULL)
		printf("Name : %s\n", d->name);
	printf("Age : %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner : (nil)\n");
	else if (d->owner != NULL)
		printf("Owner : %s\n", d->owner);
}
