#include <stdio.h>
/**
* main - prints from 0 to 9 
* Return: 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++) 
{
putchar('0' + i);
if (i == 9)
{
putchar('\n');
}
}
return (0);
}
