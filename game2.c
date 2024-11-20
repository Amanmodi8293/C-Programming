#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess, number, nguess = 1;
    srand(time (0));
    number = rand()%100 + 1;
    do{
        printf("Guess the number is 1 to 100\n");
        scanf("%d",&guess);
        if(number<guess){
            printf("Lower number please\n");
        }
        else if(number>guess){
            printf("Higher number please\n");
        }
        else{
            printf("your geussed attemp is %d",nguess);
    }
        nguess++;
    }
    while(guess != number);
     return 0;
}