#include<stdio.h>
int factorial(int number){
    if ((number==1||number==0))
    {
        return 1;
    }
    else{
        return (number*factorial(number-1));
    }
}
    int main(){
        int num;
        printf("enter the number you want\n");
        scanf("%d",&num);
        int k = factorial(num);
        printf("the factorial of %d is %d \n",num,k);
    
    return 0;
}

