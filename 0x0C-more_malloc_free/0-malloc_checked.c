#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - and Main
*
* @b:input
*
* Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *a;


	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

