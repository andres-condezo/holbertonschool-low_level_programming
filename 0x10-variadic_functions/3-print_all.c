#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * imp_c - Prints a char.
 * @parameters: A list of types of arguments.
 *
 * Return: void.
 */
void imp_c(va_list parameters)
{
	printf("%c", va_arg(parameters, int));
}

/**
 * imp_i - Prints an int.
 * @parameters: A list of types of arguments.
 *
 * Return: void.
 */
void imp_i(va_list parameters)
{
	printf("%d", va_arg(parameters, int));
}

/**
 * imp_f - Prints a float.
 * @parameters: A list of types of arguments.
 *
 * Return: void.
 */
void imp_f(va_list parameters)
{
	printf("%f", va_arg(parameters, double));
}

/**
 * imp_s - Prints a string.
 * @parameters: A list of types of arguments.
 *
 * Return: void.
 */
void imp_s(va_list parameters)
{
	char *string = va_arg(parameters, char *);

	if (parameters == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}


/**
 * print_all - Prints anything.
 * @format: A list of types of arguments.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list parameters;
	int i = 0, j;

	op_structure ops[] = {
	{"c", imp_c},
	{"i", imp_i},
	{"f", imp_f},
	{"s", imp_s},
	{NULL, NULL}
	};


	va_start(parameters, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (ops[j].fmt[0] == format[i])
			{
				ops[j].fn(parameters);

				if (format[i + 1])
				{
					printf(", ");
				}
			}
		}
		i++;
	}

	printf("\n");
	va_end(parameters);
}
