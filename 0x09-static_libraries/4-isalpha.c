#include <unistd.h>
/**
 * _isalpha - tests whether its a character
 * characters from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a character , 0 if it is not .
 */
int _isalpha(int c)
{
int a_as_int = (int) c;
if ((a_as_int <= 122 && a_as_int >= 97) || (a_as_int <= 90 && a_as_int >= 65))
{
return (1);
}
else
{
return (0);
}
}
