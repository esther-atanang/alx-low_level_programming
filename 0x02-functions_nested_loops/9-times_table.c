#include "main.h"
/**
 * times_table - prints 9 times table 
 * Return: the sum of two numbers.
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
_putchar('\n');
for (j = 0; j < 10; j++)
{
int p = i * j;
if (p == 81)
{
_putchar('8');
_putchar((p % 10) + '0');
}
if (p < 10)
{
_putchar(p + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (p >= 10 && p != 81)
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
}
}
