#include "3-calc.h"
#include <stdlib.h>
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}};
    int i;
    while(i < 6)
    {
        if(custom_strcmp(ops[i].op, s))
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}