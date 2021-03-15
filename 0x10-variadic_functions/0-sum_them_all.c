#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{

    if(n == 0)
    {
        return (0);
    }
    va_list ap;
    unsigned int i, sum;

    va_start (ap, n);

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += va_arg (ap, int);
    }

        va_end (ap);
        return sum;
}
