#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list string;
    va_start(string, n);
    for (i = 0; i < n; i++)
    {
        char *str;
        str = va_arg(string, char *);
        printf("%s", str);
        if (separator != NULL)
        {
            if (i < (n - 1))
            {
                printf("%s", separator);
            }
        }
    }
    printf("\n");
    va_end(string);
}
