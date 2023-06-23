#include "calc.h"
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
        if(ops[i][i] == s)
        {
            return (ops[i][(i + 1)]);
        }
    }
    return (NULL);
}