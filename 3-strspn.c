/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to compare bytes from
 * @accept: string of bytes to compare with
 * Return: number of bytes in segment s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int k;
unsigned int l = 0;
while(*(s+i) != '\0')
{
i++;
}
for(j= 0; j < i/2; j++){
for(k= 0; k < i/2; k++){
if(*(accept+j) == *(s+k)){
l++;
}
}
}
return(l);
}