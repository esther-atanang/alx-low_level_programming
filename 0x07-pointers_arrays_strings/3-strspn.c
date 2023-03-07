/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
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