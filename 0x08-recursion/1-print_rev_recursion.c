/**
 * _print_rev_recursion - it reverses a string
 * @s: the string
 * Return: nothing because it is void
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion((s + 1));
_putchar(*s);
}
}
