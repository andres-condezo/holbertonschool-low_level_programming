#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: String to be printed between numbers.
 * @n: number of parameters.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(parameters, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(parameters);
}
