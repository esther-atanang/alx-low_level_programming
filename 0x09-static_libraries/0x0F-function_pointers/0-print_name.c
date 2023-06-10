/**
 * print_name - prints out a name 
 * @name: the name
 * @f: the function that prints out the name
 * Retun: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
void (*fun_ptr)(char *) = f;
fun_ptr(name);
}
