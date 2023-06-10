#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument array
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
    int i;
    int mult = 1;

    if (argc > 2)
    {
        for (i = 1; i < argc; i++)
        {
            mult *= atoi(argv[i]);
        }
        printf("%d\n", mult);
    }
    else
    {
        printf("Error\n");
        return 1;
    }

    return (0);
}
