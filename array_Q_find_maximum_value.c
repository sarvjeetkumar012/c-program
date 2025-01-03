//find the maximum value out of all the element in the array.
#include<stdio.h>
int main(){
    int arr[]={4,3,5,9,8};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for (int i = 1; i <n; i++)
    {
        if(mx<arr[i]) mx=arr[i];
    }
    printf("%d",mx);
    
    return 0;
}