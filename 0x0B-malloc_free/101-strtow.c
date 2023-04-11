#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 *
 * @s: string to evaluate et it is the fin
 *
 * Return: number of words the end
 *
 */
int count_word(char *s)
{
	int flag, c, a;

	flag = 0;
	a = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			a++;
		}
	}

	return (a);
}
/**
 * **strtow - splits un string into en un  words
 *
 * @str: string to split
 *
 * Return: pointer  array of the  strings (Success)
 *
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tp = (char *) malloc(sizeof(char) * (c + 1));
				if (tp == NULL)
					return (NULL);
				while (start < end)
					*tp++ = str[start++];
				*tp = '\0';
				matrix[k] = tp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
