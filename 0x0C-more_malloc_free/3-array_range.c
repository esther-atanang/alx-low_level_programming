#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the min amount
 * @max: the max amount
 * Return: a pointer
*/
int *array_range(int min, int max)
{
int *ptr;
int i = 0;
if(min > max)
{
return (NULL);
}
ptr = (int *)malloc(max * sizeof(int));
if(ptr == NULL)
{
return (NULL);
}
if(max > min)
{
while(i < max)
{
ptr[i] = min;
i++;
min++;
}
}
return (ptr);
}