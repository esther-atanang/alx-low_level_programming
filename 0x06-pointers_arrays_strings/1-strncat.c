/**
 *_strncat - a function that concatenates two strings
 *@dest: the first string
 *@src: the string that is going to be moved
 *@n: the number of characters that would be moved
 *Return: the character
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && j != '0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
