#include<stdio.h>
void printarray(int ptr[],int n){
    for(int i=0; i<n; i++){
        printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=554545;
}
int main(){
    int arr[] = {12,54,66,563,7,6,54};
    printarray(arr,7);
    printf("%d",arr[2]);
    return 0;





    
}