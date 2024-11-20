#include<stdio.h>
#include<string.h>
int main(){
char look[50];
char took[50];
char c;
int i = 0;
printf("enter the value of first string\n");
scanf("%s",look);
printf("enter the value of second string character by character\n");
while(c!='\n'){
  fflush(stdin);
  scanf("%c",&c);
  took[i] = c;
  i++;
}
took[i-1] = '\0';
printf("the value of first string is : %s\n",look);
printf("the value of second string is character by character : %s\n",took);
printf("campare the strings : %d", strcmp(look,took));
return 0;
}