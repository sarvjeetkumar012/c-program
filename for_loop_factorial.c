//factorial 
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial=factorial*i;
    }
    printf("the factorial is :%d",factorial);
    
    return 0;
}