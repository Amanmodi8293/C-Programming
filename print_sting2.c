#include<stdio.h>
int main(){
    char ab[10];
    char *am;
    am = ab;
    scanf("%s", ab);
    while(*am != '\0'){
        printf("%c",*am);
        am++;
    }
    return 0;
}