//search for a element in an array.
// this is called linear serch.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={4,6,8,9,3,4,89,78,56};
    int size=sizeof(arr)/4; 
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int x=8;
    bool flag=false;
    for (int i = 0; i <size; i++)
    {
        if (arr[i]==x);
        {
        flag=true;
           break;
        }
       
    }
    if(flag==true){
        printf("%d exists! \n",x);
    }
    else{
        printf(" %d does not exists:\n",x);
    }
    
    return 0;
}