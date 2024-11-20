#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("modi_2.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("the first number is %d\n",num);
    printf("the second number is %d\n",num2);
    return 0;
}