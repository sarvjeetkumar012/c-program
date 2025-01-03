#include<stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int n=5;
    int fact;
    
    fact = factorial(n); // Call the factorial function
    printf("Factorial of %d is %d\n", n, fact); // Print the result
    
    return 0; // Indicate successful execution
}

