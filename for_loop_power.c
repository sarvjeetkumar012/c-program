//Two number are enterted throught the keyword.
//WAP to find the value of one number raised to the power or another.
#include<stdio.h>
int main (){
    int a,b;
    printf("enter the number of a:");
    scanf("%d",&a);
    printf("\nenter the number of b:");
    scanf("%d",&b);
    int power=1;
    for (int i = 1; i <=b; i++)
    {
        power=power*a;
    }
    printf("the number of %d raised to the power of %d is:%d",a,b,power);
    

    return 0;
}