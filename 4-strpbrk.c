/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if no bytes are found.
 */
char *_strpbrk(char *s, char *accept)
{
    int i = 0;
    int j;
    int k;
    int l = 0;
    while (*(s + i) != '\0')
    {
        i++;
    }
    while (*(accept + l) != '\0')
    {
        l++;
    }
    for (j = 0; j < i; j++)
    {
        for (k = 0; k < l; k++)
        {
            if (*(s + j) == *(accept + k))
            {
                return (s + j);
                break;
            }
        }
    }
    return ('\0');
}