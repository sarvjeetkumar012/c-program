// given an array of integrs , change the value
// of all odd indexed element to its secomd multiple
// and increment all even indexed value by 10.
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
        else
            arr[i] += 10;
    }
    for (int i = 0; i < n; i++)

        printf("%d ", arr[i]);
}
