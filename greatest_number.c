#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("entern the number : ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b && a>c)
    {
      printf("%d is largest number",a);
    }
    if (b>a && b>c)
    {
        printf("%d is largest",b);
    }
    if (c>a && c>b)
    {
        printf("%d is largestnumber",c);

    }
    if (a==b && a==c)
    {
        printf("all are equal");
    }
    return 0;
}

