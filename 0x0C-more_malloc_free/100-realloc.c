#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p = ptr;
int i;
unsigned int arraySize;
unsigned int firstElement;
void *new_ptr = malloc(new_size);
 if(new_size < old_size){
   i = 1;
   while(i > 0){
     firstElement = sizeof(*p);
     i--;
   }
  arraySize = new_size/firstElement;
  for(i=0; i < arraySize; i++){
    new_ptr = *p;
    new_ptr++;
    p++;
  }
  return new_ptr;
 }
 if(new_size == old_size){
    return ptr;
 }
 if(new_size > old_size){
    return new_ptr;
 }
 if(ptr == NULL){
    return new_ptr;
 }
 if(new_size == 0 && ptr != NULL){
    free(ptr);
    return NULL;
 }
 free(ptr);
 return(new_ptr);
}