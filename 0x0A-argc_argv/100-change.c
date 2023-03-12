#include <stdio.h>
#include <stdlib.h>
/**
 * main - the primary function or start point
 * @argc: the number of arguments
 * @argv: simply stores the arguments
 * Return: 0 for success, 1 for failure
*/
int main(int argc, char *argv[])
{
int c = 0;
int number;
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
while (number > 0)
{
if (number >= 25)
{
number = number - 25;
}
else if (number < 25 && number >= 10)
{
number = number - 10;
}
else if (number < 10 && number >= 5)
{
number = number - 5;
}
else if (number < 5 && number >= 2)
{
number = number - 2;
}
else if (number < 2 && number == 1)
{
number = number - 1;  
}
c++;
}
printf("%d\n", c);
return (0);
}
