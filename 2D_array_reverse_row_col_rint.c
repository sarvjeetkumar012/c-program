//reverse row and column.
#include<stdio.h>
int main(){
    int arr1[2][2]={{2,3},{4,5}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            
            printf("%d ",arr1[j][i]);// reverse row and column i=j;j=i,. 
        }
        printf("\n");
    }
    
    return 0;
}