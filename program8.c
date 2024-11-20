#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter the value of a is\n",a);
    scanf("%d",&a);
    printf("Enter the value of b is\n",b);
    scanf("%d",&b);
    printf("Enter the value of c is\n",c);
    scanf("%d",&c);
    printf("the value of average is %f",average(a,b,c));
    return 0;
}
float average(int a, int b, int c){
    float result;
    result = (float) (a + b + c)/3;
    return result;
}