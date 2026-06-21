//practice Q.29
//use library function to calculate the 
//square of a number given by user
#include<stdio.h>
#include<math.h>
int main(){


    int n=4;
    printf("%f", pow(n,2));

    return 0;
}

//write functions to calculate area of
// a square,a circle & a ractangle

/*#include<math.h>

float squareArea(float side);
float circle(float rad);
float rectangleArea(float a,float b);



int main(){
   float a =5.0;
   float b = 10.0;

   printf("area is : %f\n", rectangleArea(a,b));
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14* rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}


//recrustion

void printHW(int count);

int main(){
printHW(5);

    return 0;
}

//recursive function
void printHW(int count){
if(count == 0){
    return 0;
}
    printf("Hello World\n");
    printHW(count-1);
}
*/
