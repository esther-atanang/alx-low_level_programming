#include <unistd.h>
/**
 * rev_string - reverses a string that is passed
 * @s: a string
 * Return - nothing
*/
void rev_string(char *s){
int i = 0;
int j;
int d;
char k[1];
do {
if (*s != '\0')
{
i++;
}
d = i;
} while (*(s + i) != '\0');

for (j = (d - 1); j >= 0; j--)
{
k[0] = *(s + j);
write(1, k, 1);
}
write(1,"\n", 1);
}