#include<stdio.h>

    int main(){
      //a
        int isSunday = 0;
        int isSnowing = 1;

        //b
        int isMonday = 0;
        int isRaining = 1;

        //c
        int x;
        printf("enter number");
        scanf("%d",&x);
        printf("%d \n", x>9 && x<100);

        printf("%d \n", isSunday && isSnowing);
        printf("%d \n", isMonday || isRaining);
        printf("%d \n", x>9 && x<100);

        return 0;
    }