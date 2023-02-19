#include <stdio.h>
/**
* main - prints the alphabet in lowercase
* Return: 0 (success)
*/
int main(void)
{
char ch[] = "abcdefghijklmnopqrstuvwxyz\n";
for (int i =0; i <= 26; i++)
{
int p = ch[i];
putchar(p);
}
return (0);
}
