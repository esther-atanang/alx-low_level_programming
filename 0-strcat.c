/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
    int dest_len = strlen(dest);
    int index;

    for (index = 0; src[index]; index++)
        dest[dest_len++] = src[index];

    dest[dest_len] = '\0'; // Ensure the destination string is null-terminated

    return dest;
}
