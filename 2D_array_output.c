//output
#include<stdio.h>
int main(){
    int arr[4][2]={4,5,6,78,3,5,7,8};
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}