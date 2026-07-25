#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;

};

typedef struct ComputerScienceStudent{
    int roll;
    float cgpa;
    char name[100];

}coe;

void printInfo(struct student s1);

int main(){
    struct student s1;
   // s1. name = "dipali"; //not a modifiable value
   strcpy(s1.name, "dipali");
   s1.roll = 64;
   s1.cgpa =9.2;
   
   printf("student info : \n");
   printf("name = %s\n", s1.name);
   printf("roll no = %d\n", s1.roll);
   printf("cgpa = %f\n", s1.cgpa);
    
   return 0;
}