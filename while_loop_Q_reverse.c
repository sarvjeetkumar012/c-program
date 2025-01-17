//WAP to reverse a number.
//WAP to print sum of digits of a given number.
#include<stdio.h>
int main (){
    int n;// use long int data type for large number.(long int:Typically 8 bytes (64 bits) on 64-bit systems.)
    printf("enter the number :");
    scanf("%d",&n);
    int r=0;
   // int lastDigit;
   while (n>0)
   {
    r=r*10;
    r=r+(n%10);
    n=n/10;
   }
   printf("the reverse number is:%d",r);
    
    return 0;
}