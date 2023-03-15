#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: the string
 * Return: pointer to the new string
*/
char *_strdup(char *str)
{
int i = 0;
int j;
char *newStr;
if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
if (i == 0)
{
return (NULL);
}
newStr = malloc((i + 1) * sizeof(char));
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
