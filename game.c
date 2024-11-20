#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100 + 1;
       do{
        printf("Guess the number is 1 to 100\n");
        scanf("%d",&guess);
        if(number<guess){
            printf("lower number please\n");
        }
      else if(number>guess){
           printf("higher number please\n");
      }
      else{
        printf("you guessed attemp is %d", nguess);
      }
    nguess++;
    }
while(number!=guess);
return 0;
}