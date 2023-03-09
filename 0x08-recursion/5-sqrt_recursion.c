/**
 * _sqrt_recursion - returns the squareroot of a number
 * @n: the number which is an integer
 * Return: the square root
*/
int _sqrt_recursion(int n)
{
int j = 0;
if ((j * j) == n)
{
return (j);
}
return ((j + 1) + _sqrt_recursion(n));
}
