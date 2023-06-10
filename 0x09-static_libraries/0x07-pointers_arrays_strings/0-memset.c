/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer
 * @b : constant byte
 * @n: first bytes
 * Return: a pointer to the memory space
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
