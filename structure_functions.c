//structure function
#include<stdio.h>
#include<string.h>
typedef struct student {
    int rollnum;
    float percentage;
    char grade;
} student;
void print(student s){
    printf("roll number of s:-%d\n",s.rollnum);
    printf("percentage of s:-%f\n",s.percentage);
    printf("grade of s:-%c\n",s.grade);
}
void change(student s){
     s.grade='c';
     printf("%c\n",s.grade);
}
int main(){
    student s={76,70.4,'A'};
    print(s);
    printf("%c\n",s.grade);
   s.grade='B';
   printf("%c\n",s.grade);
    change(s);// to change grade , call function in main function
    return 0;
}