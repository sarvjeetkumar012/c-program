//volume of sphere 
#include<stdio.h>
int main(){
    float r;
    printf("enter the radius\n");
    scanf("%f",&r);
    float pi=3.14;
    float volume=(4*pi*r*r*r); 

    printf("volume of sphere is %f:",volume);

    return 0;
}