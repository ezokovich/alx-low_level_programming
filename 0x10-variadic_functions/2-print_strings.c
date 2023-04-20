#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 *
 * @separator: string  printed between the strings. le them kwon
 *
 * @n: number of  the function.
 *
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	unsigned int i;
	char *a;

	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(lis, char *);

		if (a)
			printf("%s", a);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(lis);
}
