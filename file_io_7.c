#include<stdio.h>
int main(){
    FILE *ptr;
    int a, b , c;
    ptr = fopen("modi_7.txt","r");
    fscanf(ptr,"%d %d %d ",&a, &b, &c);
    printf("the value of number is %d %d %d",a,b,c);
    fclose(ptr);
    return 0 ;
}