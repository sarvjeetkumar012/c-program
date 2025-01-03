#include<stdio.h>
int main (){
    char arr[]="sonurajkumaryadav";
    int size =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <size; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    printf("%d",size);
      
}