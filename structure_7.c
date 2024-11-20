#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;
void show(emp emp1){
    printf("the code of employee is : %d\n",emp1.code);
    printf("the salary of employee is : %.2f\n",emp1.salary);
    printf("the name of employee is : %s\n",emp1.name);
}
int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 11.22;
    strcpy(ptr->name,"aman");
    show(e1);

    return 0;
}

