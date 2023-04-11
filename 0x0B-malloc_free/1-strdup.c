#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 *
 * @str: char
 *
 * let them kwon
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bar;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bar = malloc(sizeof(char) * (i + 1));

	if (bar == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bar[r] = str[r];

	return (bar);
}
