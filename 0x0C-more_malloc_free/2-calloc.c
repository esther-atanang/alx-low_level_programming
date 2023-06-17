#include <stdio.h>
#include <stdlib.h>

void *memeset(void *ptr, int value, size_t num)
{
    unsigned long i;
    int *p = ptr;
    for (i = 0; i < num; i++)
    {
        *p = value;
        p++;
    }
    return ptr;
}

void *_calloc(unsigned int nmemb, unsigned int size){
void *ptr = malloc(size * nmemb);
if( ptr != NULL){
    memeset(ptr,0,size);
}
return ptr;
}
