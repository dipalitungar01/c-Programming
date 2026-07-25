//PQ55. write a program to store the data of 3 stdents.

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
   // s1. name = "dipali"; 
   strcpy(s1.name, "dipali");
   s1.roll = 64;
   s1.cgpa =9.2;
   
   printf("student info 1 : \n");
   printf("name = %s\n", s1.name);
   printf("roll no = %d\n", s1.roll);
   printf("cgpa = %f\n", s1.cgpa);

    
   struct student s2;
   
   strcpy(s2.name, "shradha");
   s2.roll = 68;
   s2.cgpa =8.5;
   
   printf("student info 2 : \n");
   printf("name = %s\n", s2.name);
   printf("roll no = %d\n", s2.roll);
   printf("cgpa = %f\n", s2.cgpa);

  
    
   struct student s3;
 
   strcpy(s3.name, "puja");
   s3.roll = 54;
   s3.cgpa =7.9;
   
   printf("student info 3 : \n");
   printf("name = %s\n", s3.name);
   printf("roll no = %d\n", s3.roll);
   printf("cgpa = %f\n", s3.cgpa);

   return 0;
}