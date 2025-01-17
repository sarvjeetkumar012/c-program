//WAP to print odd number 1to 100 using continue statement.
#include<stdio.h>
int main (){
    
    for (int i = 1; i <100-1; i++)
    {
        if (i%2==0)
        {
            continue;//skip the round 
        }
        printf("%d ",i);
        
    }
    
    return 0;
}