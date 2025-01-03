#include<stdio.h>
int main() {
int i=2, j=3,k,l;// int i=2 ye sab ko instruction bolte hai
float a,b;
k=i/j*j;
printf("value of k is:%d\n",k);
l=j/i*i;
printf("value of i is:%d\n",i);
a=i/j*j;
printf("value of a is:%f\n",a);//calculate hoga integer me lekin result float me aayega
b=j/i*i;
printf("value of b is:%f\n",b);
return 0;
}
