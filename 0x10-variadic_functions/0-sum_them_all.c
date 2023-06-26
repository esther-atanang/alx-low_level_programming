/*
 * File: 0-sum_them_all.c
 * Auth: Brennan D Baraban
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    if(n != 0)
    {
       unsigned int i;
        int num;
        int sum;
        va_list numList;
        sum = 0;
        va_start(numList,n);
        for(i = 0; i < n; i++)
        {
            num = va_arg(numList, int);
            sum += num;
        }
        va_end(numList);
        return(sum);
    }
    return (0);
}
