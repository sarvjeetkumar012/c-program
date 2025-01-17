//WAP to print factorial of first n number .
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial=factorial*i;
        printf("the factorial of %d is :%d\n",i,factorial);
    }
    
    return 0;
}