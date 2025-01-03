//taje positive number integer input and tell if it is a three digit number or not.
#include<stdio.h>
int main(){
    int n;
    printf("enter the positive  number ");
    scanf("%d",n);
    if (n>99&&n<1000)
    {
        printf("this is three digit number");
    }
    else{
        printf("this is not three digit number");

    }
    return 0;
    
}