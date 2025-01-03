#include<stdio.h>
int main(){
    int arr[]={4,5,7,8,9,6,0,56,88,45,78,445,778,45578,6789876,6789876};
    printf("%lu",sizeof(arr));
    // int n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",n);
    // for (int i = 0; i < n; i++)
    // {
    //   printf("%d\n",arr[i]);
    // }
    return 0;
}