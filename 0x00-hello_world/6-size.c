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
printf("size of an int:%d byte(s)\n", sizeof(intType));
printf("size of a float:%d byte(s)\n", sizeof(floatType));
printf("size of a char:%d byte(s)\n", sizeof(charType));
printf("size of a long int:%d byte(s)\n", sizeof(longType));
printf("size of a long long int:%d byte(s)\n", sizeof(longLongType));
return (0);
}
