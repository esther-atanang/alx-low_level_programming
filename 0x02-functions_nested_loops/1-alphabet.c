#include "main.h"
/**
 * main - prints out _putchar
 * Return: 0 (success)
*/
void print_alphabet(void)
{
  char c[] = "abcdefghijklmnopqrstuvwxyz";
  int i;

  for (i = 0; i < 25; i++)
  {
	_putchar(c[i]);
  }
  _putchar('\n');
}
