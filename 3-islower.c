#include <unistd.h>
/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
    int a_as_int = (int)c;
    if (a_as_int <= 122 && a_as_int >= 97)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
