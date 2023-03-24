#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - prints strings
 * 
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
va_list(args);
va_start(args, n);
for(counter = 0; counter < n; counter++)
{
printf("%s", (char *)va_arg(args, char *));
if(separator && counter != (n-1))
{
printf("%s", separator);
}
}
printf("\n");
}