/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number which is an integer
 * @y: the value it is raised by
 * Return: the value or -1 if y is below  0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
