#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("modi_6.txt","r");
    char c;
    while (c != EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}