#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument array
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
(void)argv; // Unused variable
printf("%d\n", (argc - 1)); // Print the number of arguments passed
return (0);
}