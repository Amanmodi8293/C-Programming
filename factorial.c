#include<stdio.h>
int main(){
int i, n, factorial=1;
printf("enter the value of factorial start\n");
scanf("%d",&i);
printf("enter the value of factorial and\n");
scanf("%d",&n);
for(i; i<=n; i++){
    factorial*=i;
}
printf("the value of factorial %d is %d",n,factorial);
return 0;
}