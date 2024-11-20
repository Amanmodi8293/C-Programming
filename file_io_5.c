#include<stdio.h>
int main(){
    FILE *ptr;
    // ptr = fopen("modi_5.txt","r");
    // // fgetc(ptr);
    // printf("the value of my character is %c\n",fgetc(ptr));
    // printf("the value of my character is %c\n",fgetc(ptr));
    // printf("the value of my character is %c\n",fgetc(ptr));
    // printf("the value of my character is %c\n",fgetc(ptr));
    // printf("the value of my character is %c\n",fgetc(ptr));
    ptr = fopen("modi_55.txt","w");
    putc('c', ptr);
    putc('o', ptr);
    putc('m', ptr);
    putc('e', ptr);
    putc('t', ptr);
    putc('o', ptr);
    putc('m', ptr);
    putc('y', ptr);
    fclose(ptr);
    return 0;

}