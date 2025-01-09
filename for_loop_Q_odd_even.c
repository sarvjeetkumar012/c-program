//wap to find out given number is even or odd.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    //int a=0;
    for (int i = 2; i<=n; i++)
    {
        if (i%2==0)
        {
            printf("%d this number is even number\n",i);
        }else{
        printf("%d this is a odd number\n",i);
        }
        
    }
    
    
    return 0;
}