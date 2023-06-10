#include <unistd.h>
<<<<<<< HEAD
/**
 * _putchar - returns a character
 * @c: the charater it returns
 * Return: nothing because it is void
*/
void _putchar(char c)
{
write(1,&c,1);
=======

int _putchar(char c)
{
    write(1, &c, 1);
    return (0);
>>>>>>> ef42ba6 (updated the library file)
}