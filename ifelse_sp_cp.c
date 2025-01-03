//program to tell if profit is made or loss
#include<stdio.h>
int main (){
    int sp,cp;
    printf("enter the number of sp:");
    scanf("%d",&sp);
    printf("enter the number of cp:");
    scanf("%d",&cp);
    if (sp>cp)
    {
        printf("profit");
    }
    if (cp>sp)
    {
     printf("loss");
    }
    
    if(sp==cp){
        printf("no loss no profit");
    }
}