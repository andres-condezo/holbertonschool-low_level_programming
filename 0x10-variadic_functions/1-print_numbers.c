#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Prints a sum.
 * @n: number of parameters.
 *
 * Return: sum.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list parameters;
    unsigned int i;


    va_start(parameters, n);

    for (i = 0; i < n; i++)
    {
        
        printf("%d", va_arg(parameters, int));

        if (separator != NULL && i != (n - 1))
        {
            printf("%s", separator);
        }
    }

    printf("\n");
    va_end(parameters);
}
