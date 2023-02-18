#include <stdio.h>
/**
*main-finds the size of different datatypes
*Return: 0 (success)
*/
int main(void)
{
int intType;
float floatType;
char charType;
double doubleType;
printf("This is the size of an integer: %d", sizeof(intType));
printf("This is the size of a float: %d", sizeof(floatType));
printf("This is the size of a character: %d", sizeof(charType));
printf("This is the size of a double: %d", sizeof(doubleType));
return (0);
}
