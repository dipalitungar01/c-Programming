//practice Q.20 print 1 to 50 odd number
#include<stdio.h>
int main(){
for(int i=5 ; i<=50; i++){
    if(i % 2!=0){
      printf("%d\n",i) ; 
    }//odd
}
return 0;
}