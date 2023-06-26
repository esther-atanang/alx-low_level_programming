#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list numList;
    unsigned int i;
    va_start(numList, n);
    for(i = 0; i < n; i++)
    {
     printf("%d",va_arg(numList,int));
     if(separator != NULL){
        if(i < (n - 1))
        {
          printf("%s", separator);
        }
    }
    }
    printf("\n");
    va_end(numList);
}
