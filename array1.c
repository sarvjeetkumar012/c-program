#include<stdio.h>
int main()
{
int mynumber[]={3,5,7,10,15};
mynumber[3]=45;
printf("%d\n",mynumber[3]);
for (int i = 0; i < 2; i++)
{
    printf("%d\n",mynumber[i]);
}
/*int mynumber[0];
mynumber[0]=3;
mynumber[1]=5;
mynumber[2]=7;
mynumber[3]=10;
mynumber[4]=15;
printf("%d",mynumber[2]);*/


return 0;
}