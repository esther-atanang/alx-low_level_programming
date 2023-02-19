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
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longType));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongType));
return (0);
}
