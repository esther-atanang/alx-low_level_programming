/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
int i = 0;
while(*(s+i) != '\0'){
if(*(s+i) == c )
{
return (s+i);
break;
}
i++;
}
return ('\0');
}
