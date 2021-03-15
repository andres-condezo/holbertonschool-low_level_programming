#include "3-calc.h"


/**
 * op_add - Returns the sum of a and b.
 * @a: First num.
 * @b: Second num.
 *
 * Return: a+b.
 */

int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: First num.
 * @b: Second num.
 *
 * Return: a-b.
 */

int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: First num.
 * @b: Second num.
 *
 * Return: a-b.
 */

int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Returns the division of a and b.
 * @a: First num.
 * @b: Second num.
 *
 * Return: a/b.
 */

int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);

    }
    else
    {
        return (a / b);
    }
}

/**
 * op_mod - Returns the remainder of the division of a and b.
 * @a: First num.
 * @b: Second num.
 *
 * Return: a%b.
 */

int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);

    }
    else
    {
        return (a % b);
    }
}
