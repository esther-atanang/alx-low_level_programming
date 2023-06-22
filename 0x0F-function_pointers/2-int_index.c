/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: The size of the array
 * @cmp: Pointer to the comparison function
 *
 * Description: This function searches for an integer in the given array
 * by applying the comparison function to each element.
 * It returns the index of the first element for which the
 * comparison function returns a non-zero value.
 * If no such element is found or if the size is less than or
 * equal to 0, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int returnValue;
if(size <= 0)
{
return (-1);
}
for(i = 0; i < size; i++)
{
returnValue = cmp(array[i]);
if(returnValue > 0)
{
return (i);
}
}
return (-1);
}
