#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - multiplies two positive numbers no problem
 *
 * @argc: n arguments then let work
 *
 * @argv: args
 *
 * Return: int
**/

int main(int argc, char *argv[])
{
	unsigned long mul;
	int a, j;

	if (argc != 3)
	{
		printf("Error\n");

		exit(98);
	}

	for (a = 1; a < argc; a++)
	{
		for (j = 0; argv[a][j] != '\0'; j++)
		{
			if (argv[a][j] > 57 || argv[a][j] < 48)
			{
				printf("Error\n");

				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", mul);

	return (0);
}
