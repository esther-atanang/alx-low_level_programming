/**
 * _strncpy - copies a string into another string
 * @dest: the destination
 * @src: the string that is going to be moved
 * @n: the size you want to be moved
 * Return: returns a string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for
(i = 0; i < n; i++)
{
dest[i] = src[i];
}
return dest;
}
