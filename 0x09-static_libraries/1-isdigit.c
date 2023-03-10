#include "main.h"

int _isdigit(int c){
   int as_int = (int) c;
   if(as_int <= 57 && as_int >= 48){
      return(1);
   }else{
    return(0);
   }

    return 0;
}