#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Main Entry
 * @min: input
 *
 * @max: input
 *
 * simple_print_buffer - prints buffer in hexadeximal
 *
 *  the address of memory to print
 *
 *  the size of the memory to print
 *
 * Return: 0
 *
 */

int *array_range(int min, int max)
{
	int a, b;
	int *z;



	if (min > max)
		return (NULL);
	b = max - min + 1;
	z = malloc(sizeof(int) * b);
	if (z == NULL)
		return (NULL);
	for (a = 0; a < b; a++, min++)
	{
		z[a] = min;
	}

	return (z);
}
