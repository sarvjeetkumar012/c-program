// reverse string
#include<stdio.h>
#include<string.h>
int main (){
    char str[]="sonu";
    // int size =sizeof(str)/sizeof(str[0]);// if i consider this method they give output (onu);
    int size=strlen(str);
    for (int i = 0; i <size; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
   // print the reverse string.
    for (int j = size-1; j >=0; j--)
    {
        printf("%c",str[j]);
   }
    
    
    return 0;
}