//create a function to name 10 times to print name 
#include<stdio.h>
void myfunction(){
//printf("sarvjeet kumar\n");
for (int i = 1; i < 11; i++)
{
    printf("%d-sarvjeet kumar\n",i);

}

}
int main(){
    for (int i = 1; i < 11; i++){
    printf("%d\n",i);
    myfunction();
      }
return 0;
}