//given a matrix 'a' of dimension  n*m and 2 co-ordinate (l1,r1) and (l2,r2). 
//return the value sum of the rectangle from (l1,r2)to (l2,r2).
//given row=6, coloms=4.
#include<stdio.h>
// #include<limits.h>
int main(){
    int arr[6][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    int result[5][3];
    for (int  i = 0; i < 6; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // printf("print l1,r1 andl2,r2 ");
    // for (int k= 1; k <4; k++)
    // {
    //     for (int l = 1; l <3; l++)
    //     {
    //        printf("%d ",arr[k][l]);
    //        result[k-1][l-1]arr[k]+arr[l];
    //     }
        
        // printf("\n");
    // }
    // printf("sum of rectangle");
    // for (int k = 0; k <4; k++)
    // {
    //     for (int l = 0; l < 3; l++)
    //     {
    //         printf("%d ",result[k][l]);
    //     }
        
    // }
    

    return 0;
}