//take two integers input a and b:a>b and find the remainder when a is divided by b
#include<stdio.h>
int main (){
    int a,b;//a>b
    printf("enter the divident of a :");
    scanf("%d",&a);
    printf("enter the divisior b:");
    scanf("%d",&b);
    int q=a/b;   //divisior(b)*quoiesnt(q)+reminder(r)=divident(a)
    int r=a-(b*q);
    
    
    printf("the remainder of divident %d and divisior %d is :%d\n",a,b,r);
    
    return 0;
}