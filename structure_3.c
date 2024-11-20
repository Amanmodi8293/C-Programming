#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code =100;
    facebook[0].salary =1000.21;
    strcpy(facebook[0].name,"aman");
    printf("the code of first student %d\n",facebook[0].code);
    printf("the salary of first student %.2f\n",facebook[0].salary);
    printf("the name of first student %s\n\n",facebook[0].name);


    facebook[1].code =200;
    facebook[1].salary =2000.21;
    strcpy(facebook[1].name,"modi");
    printf("the code of second student %d\n",facebook[1].code);
    printf("the salary of second student %.2f\n",facebook[1].salary);
    printf("the name of second student %s\n\n",facebook[1].name);

    facebook[2].code =300;
    facebook[2].salary =3000.21;
    strcpy(facebook[2].name,"chourasiya");
    printf("the code of third student %d\n",facebook[2].code);
    printf("the salary of third student %.2f\n",facebook[2].salary);
    printf("the name of third student %s\n\n",facebook[2].name);

    printf("done");
    return 0;
    
}