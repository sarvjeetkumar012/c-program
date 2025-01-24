//find maximum element in a give matrix.
#include<stdio.h>
#include<limits.h>
int main (){
    int arr[3][2]={{4,5},{8,6},{7,6}};
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }
    int max=INT_MIN;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (max<arr[i][j])
            {
               max=arr[i][j];
            }
            
        }
        
    }
    printf("%d ",max);
    
    return 0;
}