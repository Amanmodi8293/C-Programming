#include<stdio.h>
void encrypt(char *s){
    char *ptr = s;
    while (*ptr != '\0')

    {
        *ptr = *ptr + 1;
        ptr++;    
    }
    
}
int main(){
    char a[] = "amanmodi";
    encrypt(a);
    printf("the encrypt value is : %s ",a);
    return 0 ;

}