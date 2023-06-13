#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument array
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
    int i;
    int j = 0;
    if (argc < 2)
    {
        printf("0\n");
        return (1);
    }
    for (i = 1; i < argc; i++)
    {
        if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' && *argv[i] <= 'Z'))
        {
            printf("Error\n");
            return (1);
        }
        else
        {
            j += atoi(argv[i]);
        }
    }
    printf("%d\n", j);
    return (0);
}
