#include <stdio.h>
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	int res, temp, expo;
	
	expo = 1;
	if (n >= 0)
	{
		res = n * -1;
	}
	else
	{
		res = n;
		_putchar('-');
	}
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		printf("expo: %d, temp: %d, orig: %d\n", expo, temp, res);
	}
	while (expo >= 1)
	{

		printf("expo: %d, res: %d\n", expo, ((res /expo) % 10) * -1);
		_putchar(((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
}