//write a program to determine whether the year is a leap year or not.
#include<stdio.h>
int main (){
    int x;
printf("enter the year:");
scanf("%d",x);
if (x%4==0){
    printf("this entered number is leap year");
}
if(x%4!==0){
    printf("this year is not leap year");
}
return 0;
}