//PQ55. write a program to store the data of 3 stdents.

#include<stdio.h>
#include<string.h>

//user defined
struct student{
   
    int roll;
    float cgpa;
    char name[100];

};

int main(){
    struct student ece[100];
    ece[0].roll =1634;
    ece[0].cgpa = 9.3;
    strcpy(ece[0].name, "dipali");

    printf("name = %s\n", ece[0].name);

    return 0;
}