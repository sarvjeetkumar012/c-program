#include<stdio.h>
int main(){
    int low,high;
    low=0;
    high=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==num)
        {
            printf("no.found:-\n");
        }
        else if(num>[mid])
        low=mid+1;
        else if(num<a[mid])
        high=mid-1;

        if(low>high)
        printf("no.not found")
    }
    return 0;
}