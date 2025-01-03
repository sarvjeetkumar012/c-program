//sum of element 
#include<stdio.h>
int main(){
    int mynumber[]={2,4,5,6};
    printf("size of array is:%lu\n",sizeof(mynumber));
    int length=sizeof(mynumber)/sizeof(mynumber[0]);
    printf("length of array is:%d\n",length);
    int sum=0;
    for ( int i = 0; i < length; i++)
    {
        
     sum+= mynumber[i];
        
    }
    printf("sum of my number is :%d\n",sum);
    return 0;
}