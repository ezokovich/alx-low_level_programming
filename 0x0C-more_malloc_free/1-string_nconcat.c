#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  Entry
 *
 * @s1: input let them know
 *
 * @s2: input that we are the best
 *
 * @n: input
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *z;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (b > n)
		b = n;
	z = malloc(sizeof(char) * (a + b + 1));

	if (z == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		s[c] = s1[c];

	for (c = 0; c < b; c++)
		z[c + a] = s2[c];

	s[a + b] = '\0';

	return (z);
}
