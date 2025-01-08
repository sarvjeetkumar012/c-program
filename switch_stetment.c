//switch case stetment.
//Q.WAP to input a week number (1-7) and print day of week name using switch case. 
#include<stdio.h>
int main (){
    int n;
printf("enter the number :");
scanf("%d",&n);
switch (n)
{
case 1:
    printf("monday");
    break;
case 2:
    printf("tuesday");
    break;
case 3:
    printf("wednesday");
    break;
case 4:
    printf("thursday");
    break;
case 5:
    printf("friday");
    break;
case 6:
    printf("satrday");
    break;
case 7 :
    printf("sunday");
    break;

default:
printf("invailed number");
    break;
}
    return 0;

}