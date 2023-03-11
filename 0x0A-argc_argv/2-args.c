#include <stdio.h>

/**
 * main - the primary function or start point
 *
 * @argc: the number of arguments
 * @argv: simply stores the arguments
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
    int i;
    int num = 0;

    if ((argc > 1) && argv)
    {
        for (i = 0; i < argc; i++)
        {
            num = i;
        }
        printf("%d\n", num);
    }
    else
    {
        printf("%d\n", num);
    }

    return (0);
}
