#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    printf("enter the number you need table of :\n");
    scanf("%d",&num);
    ptr = fopen("modi_8.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n", num, i+1,num*(i+1));
    }
    fclose(ptr);
    printf("successfully generated table of %d in modi_8.txt",num);
    return 0;
}