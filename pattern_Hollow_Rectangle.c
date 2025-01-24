/*print Hollow Rectangle:
******
*    *
*    *
******
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {  int a=n+2;
        for (int j =1; j<=a; j++)
        {
         if (i == 1 || i == n || j == 1 || j == a) {
         
            printf("*");
            }
           else{
            ("   ");
            }
        }
        printf("\n");
    }
    
}