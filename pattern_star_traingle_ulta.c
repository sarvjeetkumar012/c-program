/*star traingle ulta:
****
***
**
*
 */
#include<stdio.h>
int main (){
int n;
printf("enter the number :");
scanf("%d",&n);
for (int i =1 ; i<=n; i++)
{
    for (int j = 1; j<=n+1-i; j++)
    {
        printf("*");
    }
    printf("\n");
    //second method using extra variable
    //int a=n;
    // for (int j = 1; j<=a; j++){
    //printf("*");
    //a--;
    //}
    //printf("\n");
    
}

return 0;
}



