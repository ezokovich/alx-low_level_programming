#include "variadic_functions.h"

/**
 * print_all - prints all thin
 *
 * @format: a list to the function. let them know
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list lis;
	unsigned int i = 0, j, c = 0;
	char *a;
	const char t_arg[] = "cifs";

	va_start(lis, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(lis, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(lis, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(lis, double)), c = 1;
			break;
		case 's':
			a = va_arg(lis, char *), c = 1;
			if (!a)
			{
				printf("(nil)");
				break;
			}
			printf("%s", a);
			break;
		} i++;
	}
	printf("\n"), va_end(lis);
}

