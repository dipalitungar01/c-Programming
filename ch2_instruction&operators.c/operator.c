#include<stdio.h>

    int main(){
        printf("%d \n",4 == 4);
        printf("%d \n",3 > 4);
        printf("%d \n",4 >= 9);
        printf("%d \n",6<= 9);

        //logical operator
      
        printf("%d\n", !((5>1) && (3>4)));

        int a = 1;
        int b = 4;
        a = a + b;
        printf("%d \n",a);
        return 0;
    }