#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: the size of the array
 * @c: the character that will be used to initialized
 * Return: pointer to the array of characters.
*/
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
ar[i] = c;
i++;
}
return (ar);
}
