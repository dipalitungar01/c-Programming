#include<stdio.h>


int main(){
   for(int i =1; i<=100; i=i+1){
        printf("%d\n",i);
    }


     //reverse number
     //iterator ; counter
    for(int i =10; i>=1; i=i-1){
        printf("%d\n",i);

        //incrrement operator i++(post increment)
        //++i (pre increment)
        // i++
    for(int i=0; i<=10 ;i= i++ ){// use then increase
        printf("%d \n",i);
        }

        //++i increase, then use
         int i=1;
       
         printf("%d \n", ++i);
         printf("%d \n",i);
     
      //i-- (post decrement)
      //--i (pre decrement)
       
       printf("%d \n", i--);
       printf("%d \n",i);
     
        printf("%d \n", --i);
        printf("%d \n",i);
     
    for(float i =1.0; i<=5.0; i++){
       printf("%f\n",i);
}

    for(char ch='A'; ch<='Z';ch++){
        printf("%c \n", ch);

    }
    // infinite loop dont create in any program
    

    //while loop
    int i=1;
    while(i<=5){
        printf("Hello world\n");
        i++;
    }

    //Q. print the numbers fron 0 to n
 //if n is given by user


 int n;
 printf ("enter number: ");
 scanf("%d \n",&n);

 int i=0;
 while(i<=n){
    printf("%d\n",i);
    i++;
 } 
 
// do while loop 
//first work then condition check 
   
int i = 1;
do{
   printf("%d\n",i) ;
   i++;

}while(i<=5);

return 0;
    }
}
