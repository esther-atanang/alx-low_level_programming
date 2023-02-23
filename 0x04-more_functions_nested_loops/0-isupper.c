#include "main.h"
/**
 * _isupper - checks for if a character is in uppercase
 * character in the alphabet
 * Return: (1) for upper and (0) for lower
*/
int _isupper(int c)
{
int c_as_int = (int) c;
if(c_as_int <= 90 || c_as_int >= 65)
{
return (1);
}
else{
return(0);
}
}