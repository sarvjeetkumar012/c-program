//percentage of 5 subject
 /*#include<stdio.h>
 int main(){
     //user define
     float math=89;
     float che=98;
     float phy=87;
      float hindi=92;
     float eng=87;
      total=(math+che+phy+hindi+eng)/5;
     printf("percentege of sevjeet in class 12th is: %f",total);
     return 0;
 }
//print percentage of 4 subject whose marks out of 40
#include<stdio.h>
int main(){
    float m=29 ;//marks of math
    float ph=39; //marks of physics
    float e=25; //marks of english
    float c=35; //marks of che
    float h=31; //marks of hindi
    float p=(m+p+ph+e+c)/160*100;//percentage=total markks obtain/total marks possiable)*100
    printf("percentage of all subject:%f",p);
    return 0;
}*/
//by user 
#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5;
    printf("enter the number of subject:\n");
    scanf("%f",&s1);
    printf("enter the number of subject:\n");
    scanf("%f",&s2);
    printf("enter the number of subject:\n");
    scanf("%f",&s3);
    printf("enter the number of subject:\n");
    scanf("%f",&s4);
    printf("enter the number of subject:\n");
    scanf("%f",&s5);
    float total=s1+s2+s3+s4+s5;
    float percentage=(total/160)*100;
   printf("percentage is:%f\n",percentage);
    return 0;
} 