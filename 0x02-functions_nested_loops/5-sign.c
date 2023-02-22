#include "main.h"
/**
 * print_sign - tests whether an int is + or - or 0
 * numbers.
 * @n: int to test.
 * Return: 1 if it +, 0 if it is 0 and -1 if it is -.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
