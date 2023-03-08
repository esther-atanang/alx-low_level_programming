/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: an interger
*/
int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
n++;
_strlen_recursion(*(s+1));
}
return (n);
}
