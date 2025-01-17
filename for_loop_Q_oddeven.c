#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i = 0; i <=n-1; i++)
    {
        if(n%2==0){
        printf("the number is even");
        }
        else
        {
           printf("the number is odd");
        }
        break;
    }
    
    return 0;
}