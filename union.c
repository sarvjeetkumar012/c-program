//what are union :-vat a time only one attribute can be accessed & intracted stored.
#include<stdio.h>
typedef union student 
{
    int rollnum;
    float percentage;
    char grade;
}student;
int main(){
    student s;
    s.grade='A';
    printf("%c",s.grade);
    //printf("%d",s.rollnum);
    //printf("%f",s.percentage);
    return 0;
}


