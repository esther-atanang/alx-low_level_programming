char *_strstr(char *haystack, char *needle){
int i = 0;
int j;
while(*(haystack+i) != '\0'){
    i++;
 }
 for(j = 0; j < i; j++){
     if(*(needle + 0) == *(haystack + j)){
         return (haystack + j);
         break;
     }
 }
 return ('\0');
}