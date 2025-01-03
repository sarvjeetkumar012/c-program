// print the array by user.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element :\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array of elemnt:");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array element is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
    
}