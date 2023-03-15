#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: the new string
*/
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i = 0,j = 0;
char *newStr;
if (s1 != NULL)
    while (s1[len1] != '\0')
    {
    len1++;
    }
if(s2 != NULL)
    while (s2[len2] != '\0')
    {
    len2++;
    }
newStr = malloc((len1 + len2 + 1) * sizeof(char));
if (newStr == NULL)
    return (NULL);
while (i <= (len1 + len2))
    if ((len1 + len2) == 1)
    {
    newStr[len1 + len2] = '\0';
    }
    if (i < len1 && len1 > 0)
    {
    if(s1 != NULL)
    {
    newStr[i] = s1[i];
    }
    }
    if (i >= len1 && len2 > 0)
    {
    if (s2 != NULL)
    {
    newStr[i] = s2[j];
    j++;
    }
    }
    newStr[len1 + len2] = '\0';
    i++;
return (newStr);
}
