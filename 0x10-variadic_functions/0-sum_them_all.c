#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum ofparameters.
 *
 * @n: arguments.
 *
 * Return:  parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lis;

	unsigned int i;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(lis, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lis, int);

	va_end(lis);

	return (sum);
}

