#include<stdio.h>
int main(){
    for (int i = 1; i <=5; i++){//outer loop ->no. of lines ,or no. of row
        for (int j = 1; j <=5; j++){//inner loop -> no. of stars in each line or no. of column
         printf("*");
    }
    printf("\n");// go to next line.
    }
    return 0;
}