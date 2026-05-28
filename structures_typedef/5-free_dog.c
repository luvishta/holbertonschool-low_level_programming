#include <stdio.h>
#include "dog.h"
/**
*free_dog - free all the dogs
*@d: pointer to the dog
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
