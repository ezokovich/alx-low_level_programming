#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints  array who have  element  on a newl
 *
 * @array: array
 *
 * @size: how many element to print
 *
 * @action: pointer  in regular or hexadecimale
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
