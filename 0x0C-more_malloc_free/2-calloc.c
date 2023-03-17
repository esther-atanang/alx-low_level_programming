#include <stdlib.h>
/**
 * _calloc - alocates memory for a array
 * @nmemb: amount of element
 * @size: sixe of the data type
 * Return: the pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
int i = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
