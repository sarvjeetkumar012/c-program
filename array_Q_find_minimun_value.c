//find the minimum value out of all the element in the array.
// #include<stdio.h>
// int main(){
//     int arr[]={4,6,78,2,78,98,34,9};
//     int lenght=sizeof(arr)/4;
//     int min=arr[0];
//     for (int i = 1; i <lenght; i++)
//     {
//         if (min>arr[i])
//         {
//             min=arr[i];
//         }
        
//     }
//     printf("minimum value of array is:%d",min);
    
//     return 0;
// }
//find the minimum value out of all the element in the array.
//second method.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={4,6,78,2,78,98,34,9};
    int lenght=sizeof(arr)/4;
    int min=INT_MAX;
    for (int i = 1; i <lenght; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
        
    }
    printf("minimum value of array is:%d",min);
    
    return 0;
}