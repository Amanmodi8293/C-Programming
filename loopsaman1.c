#include<stdio.h>
int main(){
    int skip, n, i;
    printf("enter the value of i\n");
    scanf("%d",&i);
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of skip\n");
    scanf("%d",&skip);
    for(i; i<=n; i++){
         if(i == skip)
         {
            continue;
        }
        
           printf("%d\n",i);
    }
    return 0;
}