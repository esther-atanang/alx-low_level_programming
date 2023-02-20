#include <stdio.h>
/**
* main - prints the comma separated nums
* Return: 0 (success)
*/
int main(void)
{
int i;
for (i = '1'; i <= '9'; i++)
{
putchar(i);
if(i != '9'){
putchar(',');
}
}
putchar('\n');
return (0);
}
