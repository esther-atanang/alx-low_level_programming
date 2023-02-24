#include "main.h"
/**
 * print_diagonal- prints a diagonal line.
 * @n: digit.
 */
void print_diagonal(int n) 
{ 
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++){
_putchar('\\');
_putchar('\n');
if (i < n){
for (j = (i-1);j >= 0; j--){
_putchar(' ');
}
}   
}
}
}
