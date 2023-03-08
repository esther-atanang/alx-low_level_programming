/**
 * is_prime_number - checks whether it is prime or not
 * @n: the interger
 * Return: 1 for prime and 0 for not
*/
int is_prime_number(int n)
{
if (((n % 2 == 0) && (n != 2)) || ((n % 3 == 0) && (n != 3)) || n >= 1)
{
return (0);
}
return (1);
}
