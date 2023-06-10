/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
    int i = 0;
    int j;
    while (*(haystack + i) != '\0')
    {
        i++;
    }
    for (j = 0; j < i; j++)
    {
        if (*(needle + 0) == *(haystack + j))
        {
            return (haystack + j);
            break;
        }
    }
    return ('\0');
}