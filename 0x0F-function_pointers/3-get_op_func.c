#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}};
    int i = 0;
    while (i < 4)
    {
        if (*s == *ops[i].op)
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
