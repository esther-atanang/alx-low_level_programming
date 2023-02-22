#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int p = n % 10;
	if( p < 0){
		p = p * -1;
		_putchar(p + '0');
	}else{
		_putchar(p + '0');
	}
	return(p);
}