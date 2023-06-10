#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -
 * Return:
 */
int main()
{
int password[100];
int i, add, j;
add = 0;
srand(time(NULL));
for(i = 0; i < 100; i++){
    password[i] = rand() % 78;
    add += (password[i] + '0');
    putchar(password[i] + '0');
    if((2772 - add)- '0' < 78){
        j = 2772 - add- '0';
        add += j;
        putchar(add + '0');
        break;
    }
}
return(0);
}
