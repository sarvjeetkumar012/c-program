#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={4,6,8,9,3,4,89,78,56};
    int size=sizeof(arr)/4; 
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //finding the largest max
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max<arr[i])
        max=arr[i];

    }
    printf("%d is the largest number\n",max);
    //finding second larges
    int secondmax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]!=max &&  secondmax<arr[i])
        secondmax=arr[i];

    }
    printf("%d is the second largest number\n",secondmax);
    return 0;
    }