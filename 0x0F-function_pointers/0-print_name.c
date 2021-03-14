#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: name to be printed.
 * @f: fuction to be called.
 *
 * Return: Void.
 */


void print_name(char *name, void (*f)(char *))
{
if(name && f)
{
(*f)(name);
}
}
