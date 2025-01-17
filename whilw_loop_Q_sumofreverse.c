//WAP to sum of reverse a number.
#include<stdio.h>
int main (){
    int n;// use long int data type for large number.(long int:Typically 8 bytes (64 bits) on 64-bit systems.)
    printf("enter the number :");
    scanf("%d",&n);
    int r=0;
   int lastDigit;
   int sum=0;
   while (n!=0)
   {
    r=r*10;
    r=r+(n%10);
    lastDigit=n%10;
    sum=sum+lastDigit;
    n=n/10;
   }
   printf("the reverse number is:%d\n",r);
   printf("the sum of reverse number is:%d",sum);
    
    return 0;
}