// #include<stdio.h>
// int main()
// {
// int i,j,rows;
// printf("enter the rows.....");
// scanf("%d",&rows)
// for(i=1;i<=rows;i++)
// {
//        for(j=1;j<=i;j++)
//     {
//       printf("%d",rows);  
//         }
//     printf("\n");
// }
// return 0;
// }


#include <stdio.h>

int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows); // Use &rows to get the address of rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", rows); // Prints the value of rows, which remains constant
        }
        printf("\n"); // Newline after each row
    }

    return 0; // Return 0 to indicate successful completion
}
