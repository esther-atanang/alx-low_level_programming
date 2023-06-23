/**
 * print_name - Prints a name
 * @name: Pointer to a string containing the name
 * @f: Pointer to a function that prints the name
 *
 * Description: This function takes a name and a function pointer as arguments
 *              and uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (f)
{
(*f)(name);
}
}
