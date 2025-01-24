/*star traingle:
* 
**
***
****
  */
#include<stdio.h>
int main (){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)//number of row(lines)
    {
        for (int  j = 1; j<=i; j++)//number of columns(star)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}