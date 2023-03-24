#include <stdarg.h>
#include <stdio.h>
/**
 * print_number - prints out number
 * @separator: a character
 * @n: the number of intergers
 * 
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int x;
va_list(args);
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
printf("%d", x);
if(separator && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
