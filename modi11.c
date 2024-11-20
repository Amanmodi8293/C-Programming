# include<stdio.h>
int main(){
int age;
printf("Enter the age\n");
scanf("%d",&age);
if((age>=18 && age<=70 ) || (age==90))
{
printf("you can do marriage");
}
else
{
printf("you can not do marriage");
}
return 0;
}