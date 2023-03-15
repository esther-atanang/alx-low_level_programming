#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: the new string
*/
char *str_concat(char *s1, char *s2)
{
int len1, len2, i, j = 0;
char *newStr;
if (s1 != NULL)
{
while (s1[len1] != '\0')
{
len1++;
}
}
if(s2 != NULL)
{
while (s2[len2] != '\0')
{
len2++;
}
}
newStr = malloc((len1 + len2 + 1) * sizeof(char));
if(!newStr) return (NULL);
for (i = 0; i < len1; i++) newStr[i] = s1[i];
for (j = 0; j < len2; j++) newStr[i + j] = s2[j];
newStr[len1 + len2] = '\0';
return (newStr);
}
