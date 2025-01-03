#include<stdio.h>
int main(){
    float r;
    printf("enter the radius\n");
    scanf("%f",&r);
    float pi=3.1415;
    float area=pi*r*r;
    printf("the area of circle is:%f",area);
    return 0;
}