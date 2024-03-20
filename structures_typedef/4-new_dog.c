#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - entry
 * @name: name of dog
 * @age: GE
 * @owner: slaver
 * Description: five night of frefddy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1 = 0;
	int l2 = 0;
	int i;
	dog_t *new_dog;

	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (l1 + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (l2 + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
