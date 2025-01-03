//basic structure rule and syntax.
#include<stdio.h>
int main(){
struct student{
    int rollnum;
    float percentage;
    char grade;
};
struct student sonu;//declaration
sonu.grade='A';
sonu.percentage=98.3;
sonu.rollnum=1;

struct student sarvjeet ;//declaration
sarvjeet.grade='a';
sarvjeet.percentage=98.3;
sarvjeet.rollnum=1;
printf("sonu class record\n");
printf("roll number: %d\n",sonu.rollnum);
printf("grade: %c\n",sonu.grade);
printf("percentage: %f\n",sonu.percentage);
printf("sarvjeet kumar class record\n");
printf("roll number: %d\n",sarvjeet.rollnum);
printf("grade: %c\n",sarvjeet.grade);
printf("percentage: %f\n",sarvjeet.percentage);

struct student suraj={45,78.2,'c'};// another type decration in structure.
printf("suraj class record\n");
printf("roll number: %d\n",suraj.rollnum);
printf("grade: %c\n",suraj.grade);
printf("percentage: %f\n",suraj.percentage);


    return 0;
}