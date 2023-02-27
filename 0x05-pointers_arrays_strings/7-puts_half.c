#include "main.h"
/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 */
void puts_half(char *str)
{
	int i = 0;
    int j;

	while (str[i] != '\0')
	{
		i++;
	}
  for(j = (i/2);j < i; j++){
    _putchar(str[j]);
}
_putchar('\n');
}