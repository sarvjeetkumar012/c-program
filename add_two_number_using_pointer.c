#include <stdio.h>

int main() {
    int n1, n2, sum;
    int *ptr1, *ptr2;
    ptr1 = &n1;
    ptr2 = &n2;
    printf("Enter first number: ");
    scanf("%d", ptr1);
    printf("Enter second number: ");
    scanf("%d", ptr2);
    sum = *ptr1 + *ptr2;
    printf("Sum: %d\n", sum);

    return 0;
}
