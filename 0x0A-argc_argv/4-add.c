#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i;
int add = 0;
if (argc > 2){
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) + 0 == atoi(argv[i]))
{
add += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
break;
}
}
printf("%d\n", add);
 }
else
{
printf("0\n");
}
 return (0);
}