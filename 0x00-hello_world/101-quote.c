#include <unistd.h>
/**
*main- prints out a quote followed by a new line 
*Return:1(Error)
*/
int main(void)
{
write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
return (1);     
}