//WAP to print all the ascii value and their equivalent character of 26 alphabets.
#include<stdio.h>
int main(){
    for (int i = 65; i <=90; i++)
    {
        char ch=(char)i;
        printf("%c ->",ch);
        printf("%d\n",i);
    }
    
    return 0;
}