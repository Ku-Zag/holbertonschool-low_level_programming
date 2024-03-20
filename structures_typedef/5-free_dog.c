#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - no tail no leg
 * @d: pointer to struct
 * Description: i am a cat person
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
