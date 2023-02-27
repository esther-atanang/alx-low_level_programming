#include "main.h"

void print_rev(char *s)
{
int j;
int k = _strlen(s);
for(j = (k- 1);j >= 0; j--)
{
_putchar(*(s+j));
}
_putchar('\n');
}