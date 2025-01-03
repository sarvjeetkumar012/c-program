#include<stdio.h>
int main(){
    float principle,rate,time,si;
    printf("enter the number :");
    scanf("%f",&principle);
    printf("enter the number :");
    scanf("%f",&rate);
    printf("enter the number :");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("the simple intrest is :%f",si);

    return 0;
}