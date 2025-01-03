// built in function in string.
#include<stdio.h>
#include<string.h>
int main (){
    // char str[]="sonu rajkumar yadav";
    // printf("%lu",strlen(str));//they find lenght but null char is not consider.


    //deep copy.
    char str[]="sonu rajkumar yadav";
    char ptr[25];
    strcpy(ptr,str);
    printf("%s\n",str);
    printf("%s\n",ptr);
    str[0]='m';
    printf("%s\n",str);
    printf("%s\n",ptr);//do not change in ptr .
    return 0;
}