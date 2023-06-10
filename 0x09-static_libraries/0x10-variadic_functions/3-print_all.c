#include <string.h>
#include <stdarg.h>
#include <stdio.h>
void print_all(const char * const format, ...)
{
int n;
int i = 0;
va_list(args);
va_start(args, format);
n = strlen(format);
while(i < n)
{
if (format[i] == 'c')
{
char arg = (char)va_arg(args, int);
printf("%c ", arg);
}
else if (format[i] == 's')
{
char *arg = (char *)va_arg(args, char *);
if (arg == NULL)
{
printf("(nil)");
}
else
{
printf("%s ", (arg));
}
}
else if (format[i] == 'f')
{
double arg = va_arg(args, double);
printf("%f ", (arg));
}
else if(format[i] == 'i')
{
int arg = va_arg(args, int);
printf("%i ",arg);
}
i++;
}
printf("\n");
va_end(args);
}