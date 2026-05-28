#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - creates a new dog.
  *@name: the name of the dog
  *@age: the age of the dog
  *@owner: the owner of the dog
  *Return: pointer to the dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;
	int j;
	int name_len = 0;
	int owner_len = 0;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		name_len++;

	for (j = 0; owner[j] != '\0'; j++)
		owner_len++;

	d->name = malloc(sizeof(char) * (name_len + 1));
	d->owner = malloc(sizeof(char) * (owner_len + 1));

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (j = 0; owner[j]; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	d->age = age;

	return (d);
}
