//array of structure
#include<stdio.h>
#include<string.h>
typedef struct student
{
    int rollnum;
    float percentage;
    char grade;
    char name[20];
} student ;
int main (){
    student arr[0];
    arr[0].grade='A';
    arr[0].rollnum=5;
    arr[0].percentage=94.7;
    strcpy(arr[0].name,"sarvjeet kumar");
    printf("name of student:%s\n",arr[0].name);
    printf("rollnum of student:%d\n",arr[0].rollnum);
    printf("percentage of student:%f\n",arr[0].percentage);
    printf("grade of student:%c\n",arr[0].grade);

    // second method of declartion and inislization;
    student s={4,98.5,'A',""};
    strcpy(s.name,"sonu kumar");//note:-arr[1].name nhi hoga yaha s.name hoga 
    arr[1]=s;
    printf("roll number of second student:%d\n",arr[1].rollnum);
    printf("name of second student:%s\n",arr[1].name);
    return 0;
}
