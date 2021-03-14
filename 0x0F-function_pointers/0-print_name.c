#include "function_pointers.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: name of new instance of dog structur.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Return: Void.
 */


void print_name(char *name, void (*f)(char *))
{
    (*f)(name);
}
