#include<stdio.h>
int main(){
    int arr[5]={3,6,8,3,1};
    arr[4]=100;//{3,6,8,3,100} ab index 4 par value update ho gaya
    printf("%d\n",arr[4]);
    char a[3]={'a','r','t'};
    printf("%c\n",a[2]);
    return 0;
}
