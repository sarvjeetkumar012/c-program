//copy of structure
#include<stdio.h>
#include<string.h>
typedef struct student
{
    int rollnum;
    float percentage;
    char grade;
    // char name[20];
} student ;
int main (){
   student s1={5,94.4,'A'};
   student s2=s1;//deep copy
   printf("%c ",s1.grade);
   printf("%c ",s2.grade);
   s2.grade='C';
   printf("%c ",s1.grade);
   printf("%c ",s2.grade);
    
    return 0;
}
