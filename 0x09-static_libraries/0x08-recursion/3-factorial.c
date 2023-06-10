/**
 * factorial - returns the factorial of a number
 * @n: an interger
 * Return: 1 (n is zero), the factorial and -1 for err
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
