//if an array arr contains n element , then check if the given array is a palindrome or not.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array of elemnt:\n");
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array element is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int pallendrom=1;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-i-1])
        {
            pallendrom=0;
            break;
        }
        
    }
    if (pallendrom){
        printf("the array is a pallindrome\n");

    }else{
        printf("the array is not a plindrom\n");
    }
    
    return 0;
    
}