#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: name of dog egg milou
 *
 * @age: age of dog 34.
 * @owner: owner of dog little.
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	n++;

	dog->name = malloc(n * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; a < n; a++)
		dog->name[a] = name[a];
	dog->age = age;

	for (o = 0; owner[o]; o++)
		;
	o++;

	dog->owner = malloc(o * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < o; a++)
	dog->owner[a] = owner[a];
	return (dog);
}
