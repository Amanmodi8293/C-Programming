#include<stdio.h>
void decrypt(char *p){
    char *f = p;
    while (*f != '\0')
    {
       *f  = *f - 1;
       f++;
    }
    
}
int main(){
    char a[] = "bnbonpej";
    decrypt(a);
    printf("the value of decrypt is : %s",a);
    return 0;
}