//WAP to find minimum element in matrix.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4][3]= { {5,8,9},{5,4,6},{8,7,5},{2,4,5}};
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    }
    printf("\n");
    int minimum=INT_MAX;
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (minimum>arr[i][j])
            {
                minimum=arr[i][j];
            }
            
        }
       printf("%d ",minimum);
    }

    //  printf("%d ",minimum);
    return 0;
}