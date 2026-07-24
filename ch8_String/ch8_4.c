#include <stdio.h>

void printString(char arr[]);

int main() {
    
  char *canChange = "Hello Would";
   puts(canChange);
   canChange = "Hello";
   puts(canChange);

//    char *cannotChange[] = "Hello Would";
//    puts(cannotChange);
//    cannotChange = "Hello";
  
    return 0;
}

void printString(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}