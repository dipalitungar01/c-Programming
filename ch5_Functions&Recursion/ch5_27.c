//Q.27 function write two functions -one to print "Hello" 
//and second to print "Goodbye"
// declaration/prototype

#include<stdio.h>

void printHello();
void printGoodbye();


int main(){
  printHello();//function call
  printGoodbye();
  return 0;

}

// function definition
void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){    
    printf(" Good bye :\n");
}

