#include "main.h"
/**
 * print_alphabet - prints out the alphabets
 * Return: 0 (success)
*/
void print_alphabet(void)
{
char c[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
