#include<stdio.h>
int main (){
    int arr[4];
    int *ptr = arr;
    ptr = ptr +2;
    if(ptr == &arr[2]){
        printf("these location are same in memory");
    }
    else{
        printf("these location are not same in memory");
    }
    return 0;
}