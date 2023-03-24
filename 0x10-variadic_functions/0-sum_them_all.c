#include <stdarg.h>
#include <stdio.h> 
/**
 * sum_them_all - sum all numbers
 * @n: the number for arguments
 * Return: the sum of the numbers
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int x = 0;
va_list(args);
va_start(args, n);
if (n == 0)
{
 return (0);
}
for (i = 0; i < n; i++)
{
x += va_arg(args, int);
}  
va_end(args); 
return (x);
}
