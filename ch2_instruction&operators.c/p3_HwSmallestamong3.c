#include<stdio.h>

int main(){
    
    int a, b ,c,smallest;

    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);

    smallest = a;

    if(b < smallest){
        smallest = b;

    }
  if(c < smallest){
        smallest = c;
  }
  printf("Smallest number = %d", smallest);  
        return 0;
   
}