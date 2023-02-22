#include <unistd.h>
/**
 * _islower: checks for if a char is in lowercase
 * Return: 0 for (lower) and 1 (upper)
*/
int _islower(int c){
    
    int a_as_int = (int) c;
    if(a_as_int <= 122 && a_as_int >= 97 ){
        return (1);
    }else{
        return (0);
    }

}