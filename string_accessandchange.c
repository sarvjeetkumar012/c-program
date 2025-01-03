#include<stdio.h>
int main(){
    char str[]="sonu";
    printf("%s\n",str);
    str[0]='m';
    printf("%s\n",str);
    str[1]=66;
    printf("%s\n",str);
    str[1]=97;
    printf("%s\n",str);
    return 0;
}