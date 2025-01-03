//take positive integer input and tell if it is divisible by 5 or not.
#include<stdio.h>
int main(){
    int n;
    printf("enter a positive integer:");
    scanf("%d",n);
    if (n%5==0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}