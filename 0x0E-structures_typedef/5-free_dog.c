#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free memory
 *
 * there are many way to kill a cat
 *
 * @d: is pointer to dog_t question tag.
**/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
