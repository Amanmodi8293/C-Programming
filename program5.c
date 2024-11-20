#include<stdio.h>
void change(int a);
int main(){
    int a = 40;
    printf("the value of a before change is %d\n",a);
    change(a);
    return 0;
}
void change(int a){
    a = 50;
    printf("the value of a after change is %d\n",a);
}
