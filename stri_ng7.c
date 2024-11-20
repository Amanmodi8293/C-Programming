#include<stdio.h>
#include<string.h>
int main(){
    char *a = "aman";
    char b[50];
    strcpy(b,a);
    printf("now the is : %s",b);
    return 0;

}