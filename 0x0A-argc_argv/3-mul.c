#include <stdio.h>
#include <stdlib.h>
/**
 * main - the primary function or start point
 * @argc: the number of arguments
 * @argv: simply stores the arguments
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
int i;
int multiply = 1;
if (argc == 3) 
{
for (i = 1; i < argc; i++)
{
multiply *= atoi(argv[i]);
}
printf("%d\n", multiply);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
