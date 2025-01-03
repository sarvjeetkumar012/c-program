//create a stucture type 'person' with name, sarly, and age as its attributes.Declare and initalize 2 variable for this.
//print the name of first person and age of the other.
#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
    int salary;
};
int main(){
    struct person p1;
    p1.age=30;
    p1.salary=100000;
    strcpy(p1.name,"sarvjeet kumar");
    struct person  p2;
    p2.age =35;
    p2.salary=50000;
    strcpy(p2.name,"sonu kumar");
    printf("name of p1:%s\n",p1.name);
    printf("name of p1:%d\n",p2.age);
    return 0;
}
