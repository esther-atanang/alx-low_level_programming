/**
 * _memcpy - a function that copies memory area.
 * @dest: the memory area
 * @src: the other memeory area 
 * @n: the number of bytes
 * Return: the memory space
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{ 
unsigned int i = 0;
while (i < n)
{
*(dest + i) = src[i];
i++;
}
return (dest);
}
