#include<stdio.h>

int main(){
    int n_students = 3;
    int n_subjects = 5;

    int marks [3][5];
    for(int i=0; i<n_students; i++){
        for(int j=0; j<n_subjects; j++){
         printf("enter the marks of student %d in subject %d\n",i+1,j+1);
         scanf("%d", &marks[i][j]);


       }
}    
    for(int i=0; i<n_students; i++){
       for(int j=0; j<n_subjects; j++){
         printf("\nthe marks of student %d in subject %d is : %d\n",i+1,j+1,marks[i][j]);
        
       }
}
    return 0;
}