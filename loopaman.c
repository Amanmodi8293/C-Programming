#include<stdio.h>
int main(){
int n;
printf("Enter the value of n");
scanf("%d",&n);
for(int i = n; i; i--){
    printf("the number is %d\n",i);
}
return 0;
}