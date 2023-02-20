/**
* main - prints the hexadecimals in lowercase
* Return: 0 (success)
*/
int main(void)
{
int i;
char ch[] = "0123456789abcdef\n";
for (i =0; i <= 16; i++)
{
int p = ch[i];
putchar(p);
}
return (0);
}

