#include "variadic_functions.h"

/**
 * print_numbers - Print number
 *
 * @separator:  numbers.
 *
 * @n: passed  function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lis;

	unsigned int i;

	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lis, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(lis);
}
