#include<stdio.h>
int main(){
    int arr[5]={4,2,7,8,1};
    for (int i = 0; i <5; i++)
    {
      printf("%d",arr[i]);
    }
    int n=5
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; i <n-1-i; j++)
        {
            printf("%d",arr[i]);
        }
        if (arr[j]<arr[j+1]){
          int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              
              }

    }
    
    
    return 0;
}