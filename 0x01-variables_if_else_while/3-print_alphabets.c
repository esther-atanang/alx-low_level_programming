#include <stdio.h>
/**
* main - prints the alphabet in lowercase
* Return: 0 (success)
*/
int main(void)
{
int i;
char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
for (i = 0; i <= 52; i++)
{
int p = ch[i];
putchar(p);
}
return (0);
}
