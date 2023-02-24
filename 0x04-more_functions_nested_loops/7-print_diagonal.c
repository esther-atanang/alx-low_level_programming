#include "main.h"

void print_diagonal(int n) { 
int i, j;
for(i = 1; i <= n; i++){
    _putchar('\\');
    _putchar('\n');
    for(j=i;j > 0; j--){
        _putchar('\t');
    }
}
_putchar('\n');  
}