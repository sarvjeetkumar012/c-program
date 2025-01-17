#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=0;
    int i;
for (i = 0; i <=n; i++)
{
    if (i%2!=0) sum=sum+i;
    else sum=sum-i;
}
printf("sum of serise is:%d",sum);

    return 0;
}