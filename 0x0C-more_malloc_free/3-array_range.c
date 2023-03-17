#include <stdlib.h>
int *array_range(int min, int max)
{
int i = 0;
int *ptr;
if(min > max)
{
return NULL;
}
ptr = malloc(max * sizeof(int));
if(ptr == NULL){
return NULL;
}
while(i < max)
{
    ptr[i] = min;
    min++;
    i++;
}
return (ptr);
}