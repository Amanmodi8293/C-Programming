#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 100;
    // (*ptr).salary = 11.111;
    // strcpy((*ptr).name,"aman");

    ptr->code = 100;
    ptr->salary = 11.111;
    strcpy(ptr->name,"aman");
    printf("the code is %d\n",e1.code);
    printf("the salary is %.2f\n",e1.salary);
    printf("the name is %s\n",e1.name);

    return 0 ;
    
}