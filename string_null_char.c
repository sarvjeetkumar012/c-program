#include<stdio.h>
int main(){
    char arr[]={"raghav\0"};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int  i = 0; i <size; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    printf("%d",size);
}