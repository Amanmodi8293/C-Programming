#include<stdio.h>
#include<string.h>
struct employee
{
int code;
float salary;
char name[10];
};
int main(){
    struct employee aman = {100, 100.12, "aman"};
    printf("the code is %d\n",aman.code);
    printf("the salary is %.2f\n",aman.salary);
    printf("the name is %s\n",aman.name);
    
   return 0;
}
