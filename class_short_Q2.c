#include<stdio.h>
int main(){
    int arr[]={4700,45,700,89,67,7,8,9,89,67,56,334};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("given array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        for (int j= 0; j < n-i; j++)
        {
         if (arr[j]>arr[j+1])
         {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
         
        }
        
    }
    printf("\n");
    printf("shorted array:");
    for (int i = 0; i < n; i++)
    {
    printf("%d  ",arr[i]);
    }
    
    

    
    return 0;
}