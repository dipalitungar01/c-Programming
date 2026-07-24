//pQ47. Create a String fistName & lastName to store details of user &
// print all the characters using a loop

#include<stdio.h>

void printString(char arr[]);

int main(){
   char firstName[] = "Dipali";
   char lastName[] = "Tungar";

   printString(firstName);
   printString(lastName);
   return 0;
}


void printString(char arr[]){
    for(int i =0; arr[i] != '\0' ;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}