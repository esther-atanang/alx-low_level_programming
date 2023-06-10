#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the array
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n = 0;
while(n < size)
{
action(array[n]);
n++;
}
}
