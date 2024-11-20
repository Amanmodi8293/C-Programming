#include<stdio.h>
float force(float mass);
int main(){
    int m;
    printf("Enter the value of mass in kgs\n");
    scanf("%d",&m);
    printf("the value of forces of newton is %.2f",force(m));
    return 0;
}
float force(float mass){
    float result;
    result = mass * 9.8;
    return result;
}