#include<stdio.h>
void printable(int *multable, int num, int n){
    printf("the multiplication table of %d is :\n",num);
    for( int i=0; i<n; i++){
        multable[i] = num*(i+1);
    }
    for( int i=0; i<n; i++){
        printf("%dx%d = %d\n",num,i+1,multable[i]);
    }
    printf("********************************************************\n\n");
}
int main(){
  int multable[3][4];
  printable(multable[0],2,10);
  printable(multable[1],7,10);
  printable(multable[2],9,10);
  
    return 0;
}