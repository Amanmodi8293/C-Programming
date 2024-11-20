#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    for(int i=0; i<6000; i++){
    ptr = (int*)malloc(6000*sizeof(int));
        printf("Enter the value of element %d :\n",i);
        scanf("%d",&ptr[i]);
        free(ptr);
    }
    for(int i=0; i<6000; i++){
        printf("The value of element %d is : %d\n",i,ptr[i]);
    }
    return 0;
}