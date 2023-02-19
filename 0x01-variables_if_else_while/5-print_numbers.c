#include <stdio.h>
/**
* main - a program that prints all single digit numbers of base 10 starting from 0
* Return: 0 (success)
*/
int main(void)
{
int i;
char ch[] = "0123456789\n";
for (i = 0; i <= 10; i++)
{
int p = ch[i];
putchar(p);
}
return (0);
}