//pQ54 . check if a given character is present in a string or not.


//PQ53. write a function to count the occurrence of vowels in a string



#include <stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main() {
 char str[] = "dipali";
 char ch = 'i';
 checkChar (str, ch);


}

void checkChar(char str[] , char ch){
    for(int i=0; str[i] !='\0'; i++){
        if(str[i] == ch){
            printf("character is present!");
            return;
        }
    }
      printf("character is not present!");
}

