#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */
void print_diagsums(int *a, int size){
  int sum = 0; 
  int sum2 = 0;
  int f = size - 1;
  int p = 0;
  int i;
  int j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            sum +=a[p];
            break;
        }
        p = p + 1;
    }
    
   for(i = 0; i < size; i++){
        for(j = (size - 1); j > 0; j--){
            sum2 += a[f];
            printf("%d\n", sum2);
            break;
        }
        f = f - 1;
    } 
}