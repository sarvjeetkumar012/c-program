//calculate the sum of all the element in the given array.
#include<stdio.h>
int main(){
int arr[5]={5,4,5,6,2};
int n=sizeof(arr)/4;
int sum=0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
}
printf("sum of my array is :%d\n",sum);


return 0;
}