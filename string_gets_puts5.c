#include<stdio.h>
int main(){
    char a[45];
    printf("enter your name : ");
    gets(a);
    puts(a);
    printf("your name is : %s",a);
    return 0;

}