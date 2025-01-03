#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    // printf("%d",n);
    int a[n];
   printf ("Enter the element of array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Traversal array");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
    
}