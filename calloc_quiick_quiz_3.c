#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("How many integer do you want to need : \n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for(int i=0; i<n; i++){
        printf("enter the value of element %d : \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("the value of element %d is : %d\n",i+1,ptr[i]);
    }
    return 0;
}