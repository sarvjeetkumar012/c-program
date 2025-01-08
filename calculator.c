//using switch case statement.
/*Q. WAP to create a calculator that perform basic arthmetic operation (add,substract, multiplyand divide).
function the calcluate should input two number and an oprator from user.*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the number of A:\n");
    scanf("%d",&a);
    char ch;
    printf("enter the opretor(+,-,*,/):\n");
    scanf("%c",&ch);
    int b;
    printf("enter the number of B:\n");
    scanf("%d",&b);
    //using if else
    // if (ch=='+')
    // {
    //     printf("%d",a+b);
    // }
    // if (ch=='-')
    // {
    //     printf("%d",a-b);
    //     }
    // if (ch=='*')
    // {
    //     printf("%d",a*b);
    // }
    // if (ch=='/')
    // {
    //     printf("%f",(float)a/b);
    // }
    
    // else{
    //     printf("invailed oprator");
    // }




    //using switch case:
    switch (ch)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;case '/':
        printf("%f",(float)a/b);
        break;
    
    default:
    printf("invalid oprator");
        break;
    }
    
    
    
    return 0;
}
