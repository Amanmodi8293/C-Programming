#include<stdio.h>
void slice(char *aa , int m , int n){
    int i = 0;
    while((m+i)<n){
        aa[i] = aa[m+i];
        i++;
    }
    aa[i] = '\0';
}
int main(){
    char aa[50];
    printf("enter your secret name : ");
    scanf("%s",aa);
    slice(aa,2,6);
    printf("your secret name is : %s",aa);
    return 0;
}