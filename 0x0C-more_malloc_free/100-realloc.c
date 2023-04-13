#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Main Entry
 *
 * @ptr: input let them hear
 *
 * @old_size: input that we are the best
 *
 * @new_size: input of all
 *
 * Return: 0
 */

void *_realloc(void *p, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i, max = new_size;
	char *oldp = p;

	if (p == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(p);
		return (NULL);
	}
	else if (new_size == old_size)
		return (p);

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		a[i] = oldp[i];
	free(p);
	return (a);
}
