//WAP to print even number using countinue statement.
#include<stdio.h>
int main (){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        if(i%2!=0){
        continue;//skip the itration
        }
        printf("%d ",i);
    }
    
    return 0;
}