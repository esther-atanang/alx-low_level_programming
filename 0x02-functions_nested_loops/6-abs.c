/**
 * _abs - changes a number to the absolute value
 * numbers.
 * @n: int to test.
 * Return: the absolute number.
 */
int _abs(int n)
{
if (n > 0)
{
n = n * 1;
return (n);
}
else if (n < 0)
{
n = n * -1;
return (n);
}
return (0);
}
