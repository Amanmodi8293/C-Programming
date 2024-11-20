#include<stdio.h>
#include<string.h>
struct employee
{
int code;
float salary;
char name[];
};
int main(){
    int a = 12;
    float b = 12.3;
    char c = 'h';
    struct employee e1;
    e1.code = 4545;
    e1.salary = 46521.23;
    strcpy(e1.name,"aman");
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}