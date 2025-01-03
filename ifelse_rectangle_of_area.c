//given the length and breath of a rectangle,write a program to find the area of the rectangle is greater than its perimeter
#include<stdio.h>
int main(){
    int l,b;
    printf("enter the value of lenght");
    scanf("%d",&l);
    printf("enter the value of breath");
    scanf("%d",&b);
    int a=l*b;
    int per=l*(l+b);
    if (a>per)
    {
      printf("area of rectangle is greater than peremeter");
    }
    else{
        printf("area is not greter than perimeter");
    }

   return 0; 
}