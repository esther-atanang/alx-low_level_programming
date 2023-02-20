#include <stdio.h>
/**
* main - prints the alphabet backwards
* Return: 0 (success)
*/
int main(void)
{
    int i;
    char ch[] = "\nabcdefghijklmnopqrstuvwxyz";
    for (i = 26; i >= 0; i--)
    {
        int p = ch[i];
        putchar(p);
    }

    return (0);
}