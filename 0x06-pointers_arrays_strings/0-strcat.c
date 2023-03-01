/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the string that gets put into the other
 * Return: it returns a string.
*/
char *_strcat(char *dest, char *src)
{
int i = 0; int j = 0;
while(dest[i] != '\0')
{
i++;
}
while(src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return dest;
}