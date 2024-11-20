#include<stdio.h>
int main(){
    int a, b, sum=0;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    while(a<=b){
        sum +=a;
        a++;
    }
    printf("the sum of %d to %d is %d",a-=b, b, sum);
    return 0;
}