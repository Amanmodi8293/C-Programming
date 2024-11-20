#include<stdio.h>
int main(){
    int i = 0;
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    do{
         printf("the number is %d\n",i);
        if(i==10){
            break;
        }
        printf("the number is %d\n",i);
            i++;
    }
        while(i<n);
    
    return 0;
}