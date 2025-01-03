#include<stdio.h>
int main (){
    int i,j,k,rows;
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",i+j);
        }
        printf("\n");
    }
}