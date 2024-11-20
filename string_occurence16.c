#include<stdio.h>
int occurence(char s[],char m){
    char *f = s;
    int count = 0;
    while (*f != '\0'){
    if(*f == m){
        count++;
    }
        f++;
 } 
    return count;
    }
int main (){
    char a[] = "aman5555555555555";
    int count = occurence(a,'5');
    printf("occurences = %d",count);
    return 0 ;
}