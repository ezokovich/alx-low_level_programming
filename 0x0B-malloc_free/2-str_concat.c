#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 *
 * @s1: input one to concat level up
 *
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	cct = malloc(sizeof(char) * (i + ci + 1));

	if (cct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		cct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		cct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (cct);
}

