#include<stdio.h>

int main()
{

      //declare variables
    float radius,area;

    //take radius input from user
    printf(" Enter radius of circle : ");
    scanf("%f", &radius);

    //calculate area of circle
    area = 3.14 * radius * radius;

    //display area
    printf("area of circle is = %f", area);
    return 0;
}

