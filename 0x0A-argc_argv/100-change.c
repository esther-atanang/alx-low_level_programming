#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
    int number, c = 0;

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
            number -= 25;
        }
        else if (number >= 10)
        {
            number -= 10;
        }
        else if (number >= 5)
        {
            number -= 5;
        }
        else if (number >= 2)
        {
            number -= 2;
        }
        else if (number == 1)
        {
            number -= 1;
        }

        c++;
    }

    printf("%d\n", c);

    return (0);
}
