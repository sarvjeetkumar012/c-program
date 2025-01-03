




#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", i); // Print the value of i directly
        }
        printf("\n"); // Print a new line after each outer loop iteration
    }
    return 0; // Return statement to indicate successful execution
}
