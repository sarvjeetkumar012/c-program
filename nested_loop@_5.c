#include<stdio.h>
int main (){
int i,j,val;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
val++;
}
printf("\n");   
}
return 0;
}