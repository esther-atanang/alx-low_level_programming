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
    int j;
    int number;
    j = 0;
    (void)argc;
    number = atoi(argv[1]);
    while (number > 0)
    {
        if (number >= 25)
        {
            number = number - 25;
            j++;
        }
        else if (number >= 10)
        {
            number = number - 10;
            j++;
        }
        else if (number >= 5)
        {
            number = number - 5;
            j++;
        }
        else if (number >= 2)
        {
            number = number - 2;
            j++;
        }
        else if (number >= 1)
        {
            number = number - 1;
            j++;
        }
    }
    printf("%d\n", j);
    return (0);
}
