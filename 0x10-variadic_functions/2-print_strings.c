#include <stdarg.h>
#include <stdio.h>
/**
 * print_string - prints strings
 * @separator: character printed in between the strings
 * @n: the number of argumnets
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
char *word;
va_list(args);
va_start(args, n);
for (counter = 0; counter < n; counter++)
{
word = (char *)va_arg(args, char *);
if(word == NULL)
{
printf("(nil)");
}
else
{
printf("%s", word);
}
if (separator && counter != (n-1))
{
printf("%s", separator);
}
}
printf("\n");
}
