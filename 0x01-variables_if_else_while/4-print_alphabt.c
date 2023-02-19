#include <stdio.h>
/**
* main - prints the alphabet in lowercase except q and e
* Return: 0 (success)
*/
int main(void)
{
int i;
char ch[] = "abcdfghijklmnoprstuvwxyz\n";
for (i = 0; i <= 24; i++)
{

int p = ch[i];
if(p != 'e' || p != 'q')
putchar(p);
}
return (0);
}
