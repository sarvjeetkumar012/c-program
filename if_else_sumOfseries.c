#include<stdio.h>
int main(){
    int n;
   printf("enter the number of the series:");
   scanf("%d",&n);
    int sum=0;
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=-n/2+n;
    }
    printf("the sum is :%d",sum);
    return 0;
}