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
long int longType;
long long int longLongType;
printf("size of an int: %zu byte(s)\n", sizeof(intType));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));
printf("size of a char: %zu byte(s)\n", sizeof(charType));
printf("size of a long int: %zu byte(s)\n", sizeof(longType));
printf("size of a long long int: %zu byte(s)\n", sizeof(longLongType));
return (0);
}
