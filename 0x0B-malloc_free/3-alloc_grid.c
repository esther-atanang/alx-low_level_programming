#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to an 2D array
 * @width: the row
 * @height: the col
 * Return: ppointer to the array
*/
int **alloc_grid(int width, int height)
{
int **arr;
int i;
int j;
if ((width <= 0)||(height <= 0))
{
return (NULL);
}
arr = malloc(width * sizeof(int *));
for (int i = 0; i < width; i++) {
    arr[i] = malloc(height * sizeof(int));
}
if (arr == NULL)
{
    return (NULL);
}
for (i = 0; i < width; i++)
{
 for (j = 0; j < height; j++)
 {
    arr[i][j] = 0;
 }
}
return (arr);
}