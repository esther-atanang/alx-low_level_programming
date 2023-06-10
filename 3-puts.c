#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: the character
 * Return: nothing
 */
void _puts(char *str)
{
    int i = 0;
    do
    {
        if (*str != '\0')
        {
            _putchar(*(str + i));
        }
        i++;
    } while (*(str + i) != '\0');
    _putchar('\n');
}
