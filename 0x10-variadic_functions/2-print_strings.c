#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
va_list(args);
va_start(args, n);
for(counter = 0; counter < n; counter++)
{
printf("%d\n", va_arg(args, int));
if(separator && n != 0)
{
printf("%s", separator);
}
}
printf("\n");
}