// how to print 2d array.
#include<stdio.h>
int main(){
    int arr[3][2]={{3,4},{5,6},{4,7}};
    for (int i = 0; i<3; i++) //frist loop for rows 
    {
        for (int j=0;j <2; j++) //second loop column ke liye
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //printf("\n");
    return 0;
}