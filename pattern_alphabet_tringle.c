/*print Alphabet TRaingle:
1
AB
123
ABCD
12345*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        char ch='A';
        for (int j = 1; j <= i; j++)
        {
            if (i%2==0)
            {
                printf("%c ",ch);
                ch++;
            }
            else{
                printf("%d ",j );
            }
        }
            printf("\n");
            
        
    }
    
    return 0;
}