#include<stdio.h>

int main(){
    
    int num ;
    printf("enter a number");
    scanf("%d",&num);


    //modulus operator checks remainder
    if(num %2 ==0){
        printf("number is even");
    }else{ 
            printf("number is odd");
        }

        return 0;
   
}

