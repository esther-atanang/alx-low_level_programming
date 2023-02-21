#include "main.h"
/**
 * main - prints out _putchar
 * Return: 0 (success)
*/
int main(void)
{
  char c[] = "abcdefghijklmnopqrstuvwxyz";
  int i;

  for (i = 0; i < 25; i++)
  {
	_putchar(c[i]);
  }
  _putchar('\n');
  return (0);
}
