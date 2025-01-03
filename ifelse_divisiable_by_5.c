//take positive integer input and tell if it is divisble by 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("enter the positive integer number:");
    scanf("%d",n);
    if(n%5==0 && n%3==0){
        printf("this number is divisiable by 5 and 3");
    }
    else{
        printf("this is not divisible by 5 and 3");
    }
    return 0;
}