#include <stddef.h>
/**
 * array_iterator - Iterates over an array and performs an action on each element
 * @array: Pointer to the array
 * @size: The size of the array
 * @action: Pointer to the function that performs the action
 *
 * Description: This function iterates over the elements of the array and
 *              applies the provided action function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if(array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
