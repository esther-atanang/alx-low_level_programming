#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -
 * Return:
 */
int main(void)
{
	srand(time(NULL));
	return rand();
}