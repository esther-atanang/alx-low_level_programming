#include <stdlib.h>
#include <stdio.h>
int *array_range(int min, int max)
{
int *ptr;
if(min > max)
{
 exit(1);
}
ptr = malloc(max * sizeof(int));
if(ptr == NULL)
{
return NULL;
}
return ptr;
}