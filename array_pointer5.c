#include<stdio.h>
int main (){
    int a;
    int *ptr = &a;
    printf("the value of ptr is %u\n",ptr);
    ptr = ptr + 1;
    // ptr++;
    printf("the value of ptr is %u\n",ptr);
return 0;
}