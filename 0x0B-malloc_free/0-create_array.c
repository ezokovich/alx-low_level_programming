#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * and initializes it with a specific char
 * create_array - create array of size size and assign char c
 * @size: size of the array to create
 * @c: char to initialize the array c
 * @size: size of array
 * @c: char to assign
 * Description: create_array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *  the address of memory to print
 *  the size of the memory to print
 *
 *  Nothing.
 *
 */

char *create_array(unsigned int size, char c)
{
	char  *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

