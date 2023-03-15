#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return - the new string
*/
char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;
int i = 0;
int j = 0;
char *newStr;
if( s1 == NULL)
{
len1++;
}
if( s2 == NULL)
{
len2++;
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
newStr = malloc((len1 + len2 + 1) * sizeof(char));
if (newStr == NULL)
{
return (NULL);
}
while (i <= (len1 + len2))
{
if(s1 == NULL || s2 == NULL)
{
    newStr[i] = "";
}
if (i < len1 && len1 > 0){
newStr[i] = s1[i];
}
if (i >= len1 && len2 > 0)
{
newStr[i] = s2[j];
j++;
}
if (i == (len1 + len2))
{
newStr[i] = '\0';
}
i++;
}
return (newStr);
}
