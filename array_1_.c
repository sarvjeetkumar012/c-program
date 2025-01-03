#include<stdio.h>
int main (){
    int num;
    int a[]={123,345,23,456,768,445};
    int count;
    printf("enter three number you want to search");
    scanf("%d",&num);
    for(int i=0;i<6;i++)
    {
        if(num==a[i]);{
            printf("index:-%d\n",i);
            count+=1;
        }
        if(count==0){
            printf("not found:-\n");
        }
    }
return 0;
}