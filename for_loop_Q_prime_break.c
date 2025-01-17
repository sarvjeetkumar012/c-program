//WAP to find out the given nuber is prime or not.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
int a=0;
for (int i = 2; i <=n-1; i++)
{
    if (n%i==0)// i is factor of n
    {
        a=1;
        break;
    }  
}
if (n==1)
{
    printf("the given number is nor prime nigther composite");
}
else if(a==0)
{
    printf("the given number is prime number");
}
else{
    printf("the given number is composite number");
}
    return 0;
}