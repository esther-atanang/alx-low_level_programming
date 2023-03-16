#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: an unsigned int
 * Return: the pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
