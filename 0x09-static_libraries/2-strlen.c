/**
 * _strlen - gives the length of a string
 * @s: the characters
 * Return: the length of the string.
 */
int _strlen(char *s)
{
    int i = 0;
    int d;
    do
    {
        if (*s != '\0')
        {
            i++;
        }
        d = i;
    } while (*(s + i) != '\0');
    return (d);
}
