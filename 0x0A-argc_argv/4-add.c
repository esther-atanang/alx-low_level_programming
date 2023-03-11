#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the primary function or start point
 * @argc: the number of arguments
 * @argv: simply stores the arguments
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{ 
char *c = argv[i];
if (isdigit(*c))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return(1);
break;
}
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
