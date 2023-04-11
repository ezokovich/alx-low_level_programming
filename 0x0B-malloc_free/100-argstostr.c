#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all arguments of the program all done
 *@ac: argument count nothing for now.
 *@av: pointer to array of the  size ac.
 *Return: NULL if of curse  ac == 0 or av == null, Pointer to new string.
 *NULL on fail.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *vic;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	vic = malloc((sizeof(char) * size) + 1);
	if (vic == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			vic[k] = av[i][j];
			j++;
			k++;
		}
		vic[k] = '\n';
		k++;
		i++;
	}
	vic[k] = '\0';
	return (vic);
}
