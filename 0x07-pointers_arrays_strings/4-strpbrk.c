char *_strpbrk(char *s, char *accept){
int i = 0;
int j; 
int k;
int l = 0;
 while(*(s+i) != '\0'){
    i++;
 }
 while(*(accept+l) != '\0'){
    l++;
 }
 for(j= 0; j < i; j++){
     for(k=0; k < l; k++){
     if(*(s+j) == *(accept+k)){
           return (s+j);
           break;
        }
     }
 }
 return ('\0');
}