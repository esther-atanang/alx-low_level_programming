#include <stdio.h>
#include "main.h"
void printNumbers(int a);

void times_table(void)
{ 
    printNumbers(1);
    // int i;
    // for(i=45; i < 51; i++)
    // {
    //     printNumbers(i);
    //     _putchar(',');
    // }
    // int i;
    // int j = 1;
    // int number;
    // number = 0;
    // while(number < 10){
    //     for (i = 0; i < 10; i++)
    //     {
    //         j = number * i;
    //         printNumbers(j);
    //         if(i < 9){
    //             _putchar(',');
    //         }
    //     }
    //     printf("\n");
    //     number++;
    }

        
}
void printNumbers(int a)
{
    int wholeNumber;
    int lastNumber;
    if(a > 9){
     wholeNumber = a / 10;
     lastNumber = a % 10;
    _putchar(wholeNumber + '0');
    _putchar(lastNumber + '0');
    }else{
      _putchar(a);
    }
}
