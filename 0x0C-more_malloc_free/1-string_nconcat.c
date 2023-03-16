#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
int j = 0;
int p = 0;
unsigned int k = 0;
unsigned int size;
char *newstr;
if(s1 != NULL)
{
while( s1[i] != '\0')
{
i++;
}
}

newstr = malloc((i + n + 1)*sizeof(char));
if (newstr == NULL)
{
return NULL;
}
size = i + n;
while(k <= size)
{
 if( k < n && s1 != NULL) 
  {
  newstr[k] = s1[k];
  }
  if(k >= i && s2 != NULL)
  {
    newstr[k] = s2[p];
    p++;
  }
  newstr[size] = '\0';
  k++;
}
return newstr;
}