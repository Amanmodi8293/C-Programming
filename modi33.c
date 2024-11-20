#include<stdio.h>
int main(){
int physics, math, chemistry;
float total;
printf("Enter the physics marks\n");
scanf("%d",&physics);
printf("Enter the math marks\n");
scanf("%d",&math);
printf("Enter the chemistry marks\n");
scanf("%d",&chemistry);
total = (physics + math + chemistry)/3;
if((total<40) || physics<33 || math<33 || chemistry<33)
{
printf("your percentage is % and you are fail\n",total);
}
else{
printf("your percentage is % and you are pass\n",total);
}
return 0;
}