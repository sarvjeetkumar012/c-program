//structure pointer.
#include<stdio.h>
#include<string.h>
typedef struct student
{
    int rollnum;
    float percentage;
    char grade;

} student ;
void change(student *p){
    //(*p).grade='C';
    p->grade='c';//second method
}
int main (){
    student s={3,98.9,'A'};
    printf("grade of sonu:-%c\n",s.grade);
    change(&s);
    printf("change grade of sonu:-%c\n",s.grade);

    printf("percentage of sonu:%f\n",s.percentage);
    printf("rollnum of sonu:%d\n",s.rollnum);

return 0;
    
}
