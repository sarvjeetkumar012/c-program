//WAP to score 10 at every index of a 2d matrix with 5 row and 5 column.
#include<stdio.h>
int main(){
    int arr[5][5];
    //store value
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j]=10;
        }
        
    }
    // print
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     
    return 0;
}