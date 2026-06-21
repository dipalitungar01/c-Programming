//print the table of a number input by the user

#include<stdio.h>
int main(){

  
  int  n;
  printf("enter number :");
  scanf("%d",&n);

  for(int i=1; i<=10;i++){
    printf("%d\n",n*i);
  }


//break

for(int i=1; i<=5; i++){
    if(i==3){
    break;
    }
        printf("%d\n",i);
     }
   printf("end");


return 0;
    }