#include <stdio.h>
/**
* main - a program that prints all single digit numbers of base 10 starting from 0
* Return: 0 (success)
*/
int main(void)
{
int i;
for(i=0;i<10;i++)
{
printf("%d",i);
if(i==9)
{
printf("\n");
}
}
return (0);
}
