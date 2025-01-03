//You have been given an integer value N. Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
#include<stdio.h>
void populatearray(int n){
    int result[n];
    int index=0;
    for(int i=1;i<n/2;i++){
        result(index++)=i;
    }
    for (int  i = n; i <1; i++)
    {
        result[index++]=i;
    }
    
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    populatearray(n);
    return 0;
}
}