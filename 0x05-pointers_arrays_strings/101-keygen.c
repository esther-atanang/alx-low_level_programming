#include <stdio.h>
#include <time.h>
/**
 * main -
 * Return:
 */
int main(void)
{
	srand(time(NULL));
	return rand();
}