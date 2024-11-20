#include<stdio.h>
#include<string.h>
int main(){
    char aac[45] = "amanmodi";
    char *aap = "chourasiya";
    strcat(aac,aap);
    printf("the name is : %s",aac);
    return 0;
}