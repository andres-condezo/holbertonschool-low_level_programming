#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Adds numbers.
 * @argc: contains the number of arguments passed to the program..
 * @argv: a one-dimensional array of strings.
 *
 * Return: 0 Success.
 */

int main(int argc, char *argv[])
{

int num1, num2;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}



num1 = atoi(argv[1]);
num2 = atoi(argv[3]);


switch (argv[2][0])
{
case '+':
break;
case '-':
break;
case '*':
break;
case '/':
break;
case '%':
break;
default:
printf("Error\n");
exit(99);
}

f = get_op_func(argv[2]);
printf("%d\n", f(num1, num2));
return (0);
}
