#include<stdio.h>
int main(){
    int a[]={40,50,60,20,15,45};
    int min=a[0];
    for(int i=0;i<6;i++ )
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
