#include <stdio.h>
/**
* main - prints the alphabet backwards
* Return: 0 (success)
*/
int main(void)
{
int i;
int j;
for (i = '0'; i <= '8'; i++)
{
for (j = '1'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i != '8' || j != '9')
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
