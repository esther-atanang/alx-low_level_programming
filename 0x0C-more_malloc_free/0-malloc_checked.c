#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
    if(ptr == NULL)
    {
        return(0);
    }
    return (ptr);
}