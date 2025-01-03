//WAP to add two matrix.
#include<stdio.h>
int main(){
    int mat1[4][3]={{1,4,5},{5,6,8,},{8,9,7},{8,5,6}};
    int mat2[4][3]={{8,8,5},{5,9,8,},{8,8,7},{6,5,6}};
    int result[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <3; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    printf("result of matrix is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <3; j++)
        {
             printf("%d ", result[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}