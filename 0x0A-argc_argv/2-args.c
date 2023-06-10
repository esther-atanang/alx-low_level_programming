#include <stdio.h>
/**
 * main - the primary function or start point
 * @argc: the number of arguments
 * @argv: simply stores the arguments
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}