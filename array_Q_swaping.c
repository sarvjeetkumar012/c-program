//wAP to reverse the array without using any extra array.
//swaping it self
// swaping and revese me yahi antar hai ki agar odd number ho to saping ko reverse bol sakte hai lekin
// even number ho to reverse nhi sawp hoga . ya revese
#include<stdio.h>
int main(){
    int arr[]={4,5,6,2,1,3,4,7,9};
    int size =sizeof(arr)/4;
    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int i=0;
    int j=size-1;
    while (i<j)
    { //swap arr[i] and arr[j]
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}