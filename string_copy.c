//copy string using pointer.
#include<stdio.h>
int main(){
    char str[]="sonu";
    char* ptr=str; // sallow copy
    printf("%s\n",str);
    printf("%s\n",ptr);

    str[0]='m';
     printf("%s\n",str);
    printf("%s\n",ptr);

    return 0;
}