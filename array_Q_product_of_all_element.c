//calculate the product of all the element of all the element in given array
#include<stdio.h>
int main(){
int arr[]={4,6,7,4};
int n=sizeof (arr)/4;
int product=1;
for (int i = 0; i < n; i++)
{
    product=product*arr[i];
}
printf("product of the array element:%d\n",product);

return 0;
}