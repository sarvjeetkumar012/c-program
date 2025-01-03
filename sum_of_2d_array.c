#include<stdio.h>
int main(){
int matrix[2][5]={{4,5,6,4},{4,5,8,9,2}};
int sum=0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 5; j++)
        {
            sum+=matrix[i][j];
      
            printf("sum of array:%d\n", sum);
        }
        return 0;
        }
        