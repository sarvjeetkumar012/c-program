//WAP to copy the content of one array into another in the reverse order.
//this is reverse order 
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / 4;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //int n;
    int brr[size];
    for (int i = 0; i < size; i++)
    {
        brr[i]=arr[size-1-i];
        
    }
    for (int i = 0; i < size; i++){
       printf("%d " ,brr[i]);
    }
    return 0;
}
