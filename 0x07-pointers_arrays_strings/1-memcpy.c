/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer
 * @src: constant byte
 * @n: first bytes
 * Return: a pointer to the memory space
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{ 
unsigned int i = 0;
while(i < n)
{
*(dest + i) = src[i];
i++;
}
return (dest);
}
