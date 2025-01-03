#include <stdio.h>
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}

int main()
{
    int n;
    printf("enter the the number you want :\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("please enter the positive number:\n");
    }
    else
    {
        printf("fibonacci series:\n");
        for (int i = 0; i < n; i++)
            printf("%d", fibonacci(i));
    }
    printf("\n");
    return 0;
}
