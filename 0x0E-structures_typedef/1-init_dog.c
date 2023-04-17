#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog.
 *
 * @d: pointer to struct le them know
 *
 * @name: parameter of name of the dog that
 *
 * @age: parameter of age of the dog we are
 *
 * @owner: pinter parameter to owner of the dog ingeenier
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
