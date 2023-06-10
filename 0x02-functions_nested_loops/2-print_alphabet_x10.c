#include "main.h"
/**
 *print_alphabet_x10 - prints out the alphabets 10x
 * Return: 0 (success)
*/
void print_alphabet_x10(void)
{
char c[] = "abcdefghijklmnopqrstuvwxyz";
int i;
int number = 10;
while (number > 0)
{
for (i = 0; i < 26; i++)
{
_putchar(c[i]);
}
_putchar('\n');
number = number - 1;
}

}
