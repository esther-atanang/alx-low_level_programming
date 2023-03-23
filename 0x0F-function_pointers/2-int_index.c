/**
 * int_index - searches for an interger
 * @array: the array
 * @size: the size
 * @cmp: the pointer
 * Return: a number
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int n = 0;
int number;
if(size <= 0)
{
return(-1);
}
while(n < size)
{
number = cmp(array[n]);
if(number == 1)
{
return (n);
}
n++;
}
return (-1);
}