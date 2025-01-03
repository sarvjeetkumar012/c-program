#include <stdio.h>

int main() {
    int n;
    printf("Enter the element of the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 1; i <= n; i++) {
        arr[i - 1] = i * i;
    }

    printf("Squares of natural numbers up to %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}