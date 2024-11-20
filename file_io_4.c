#include<stdio.h>
int main(){
    FILE *ptr;
    int a = 55;
    ptr = fopen("modi_4.txt","w");
    fprintf(ptr, "the integer is %d\n",a);
    fprintf(ptr, "thanks for using fprintf");
    fclose(ptr);
    return 0 ;
}