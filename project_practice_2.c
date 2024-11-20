#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int wsg(char you, char comp){
    if(you == comp){
        return 0 ;
     }
     if (you == 's' && comp == 'g'){
        return -1;
     }
     else if(you == 's'&& comp == 'w'){
        return 1;
     }
      if (you == 'g' && comp == 's'){
        return 1;
     }
     else if(you == 'g'&& comp == 'w'){
        return -1;
     }
      if (you == 'w' && comp == 'g'){
        return 1;
     }
     else if(you == 'w'&& comp == 's'){
        return -1;
     }

}
int main(){
    char you, comp;
    int result;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number < 33){
        comp = 's';
    }
    else if(number >33 && number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("enter the character 's' for snake and 'w' for water 'g' for gun : \n");
    scanf("%c", &you);
    result = wsg(you, comp);
    if(result == 0){
        printf("Draw the match\n");
    }
    else if(result == 1){
        printf("You win the match\n");
    }
    else{
        printf("You lose the match\n");
    }
       printf("you choose %c and computer choose %c", you , comp);
    return 0;
    
    }