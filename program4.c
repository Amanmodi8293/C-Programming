#include<stdio.h>
int sum (int a, int b);
int main(){
    int c; 
    int a , b;
    printf("enter the value of a is\n");
    scanf("%d",&a);
    printf("enter the value of b is\n");
    scanf("%d",&b);
    c = sum(a, b); 
    printf("the sum of a and b is %d",c);
    return 0;
}
int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}

