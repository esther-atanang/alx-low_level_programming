#include <unistd.h>
/**
 *main -
 *Return:
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}