#include<stdio.h>
int main (){
    int marks[4];
    printf("enter the value of 1 marks :\n");
    scanf("%d",&marks[0]);
    printf("enter the value of 2 marks :\n");
    scanf("%d",&marks[1]);
    printf("enter the value of 3 marks :\n");
    scanf("%d",&marks[2]);
    printf("enter the value of 4 marks :\n");
    scanf("%d",&marks[3]);

    printf("you have enter the value is %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);

    return 0;
}