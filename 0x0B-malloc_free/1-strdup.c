#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string
 * @str: the string that is going to be copied
 * Return: pointer to the new string
*/
char *_strdup(char *str)
{
int i = 0;
int j;
char *newStr;
while (str[i] != '\0'){
i++;
}
if (i == 0)
{
return (NULL);
}
newStr = malloc(i * sizeof(char));
if (newStr == NULL)
{
return (NULL);
}
j = 0;
while (j < i)
{
newStr[j] = str[j];
j++;
}
return (newStr);
}
