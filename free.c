// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int* ptr=(int*) calloc(10,4);
//     int* p=ptr;
//     ptr--;
//     free(ptr); 
//     return 0;
 }
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *ptr = (int *)calloc(10, sizeof(int));// Allocate memory for 10 integers

    
    int *p = ptr;

    
    for (int i = 0; i < 10; i++) { // Example operation: Initialize and print the array
        p[i] = i + 1;
        printf("%d ", p[i]);
    }
    printf("\n");

    
    free(ptr); // Free the allocated memory

    return 0;
}
