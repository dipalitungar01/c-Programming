//practice Q.18 Keep taking numbers as input from user 
//until user enters a number which is multiple of 7.

#include<stdio.h>
int main(){
int n;
    do{
        printf("Enter number :") ;
        scanf("%d",&n);
        printf("%d\n",n);
  
      if(n % 7 == 0){
        break;
      }
    
    
    }while(1);
    printf("Thank you");


for(int i=1; i<=5; i++){
    if(i == 3){ //skip current itration
        continue;
    }
    printf("%d \n",i);

return 0;
}
}