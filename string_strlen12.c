#include<stdio.h>
int strlen(char *ab){
    char *ptr = ab;
    int len = 0;
     while (*ptr != '\0')
     {
        len++;
        ptr++;
     }
     return len;
     
}
int main(){
    char ab[] = "amanmodi";
    int c = strlen(ab);
    printf("the length of this string is %d",c);
    return 0;
}