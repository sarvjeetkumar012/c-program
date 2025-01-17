//WAP to print sum of digits of a given number.
#include<stdio.h>
int main (){
    int n;// use long int data type for large number.(long int:Typically 8 bytes (64 bits) on 64-bit systems.)
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    int lastDigit;
   while (n!=0)
   {
    lastDigit=n%10;
    sum=sum+lastDigit;
    n=n/10;
    
   }
   printf("the sum of number is:%d",sum);
    
    return 0;
}