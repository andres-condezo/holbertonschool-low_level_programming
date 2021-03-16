#ifndef VARIADIC_FNCTIONS
#define VARIADIC_FNCTIONS
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void imp_c(va_list parameters);
void imp_i(va_list parameters);
void imp_f(va_list parameters);
void imp_s(va_list parameters);


typedef struct op_structure {
    char *fmt;
    void (*fn)();
} op_structure;

#endif
