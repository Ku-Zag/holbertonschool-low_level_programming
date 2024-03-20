#include "dog.h"
#include <stdlib.h>
/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nnanme;
	char *nowner;
	int l1 = 0;
	int l2 = 0;
	int i = 0;
	dog_t *new_dog;

	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	new_dog = malloc(sizeof(dog_t));

	if (new_dog = NULL)
		return(NULL);

	new_dog->name = malloc(sizeof(char) * l1);

	if (new_dog->name == NULL)
		return (NULL);

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * )
}
