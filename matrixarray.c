// matrix 2d array
#include <stdio.h>
int main()
{
    int matrix[2][3] = {{4, 5, 8}, {6, 4, 9}};
    /*printf("%d\n",matrix[0][1]);
    //change array element
    matrix[1][1]=9;
    printf("change element is:%d\n",matrix[1][1]);*/
    // loop in 2d array
    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n",matrix[i][j]);
        }
        
    return 0;
}