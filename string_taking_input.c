// taking input without loop.
#include<stdio.h>
int main(){
    char str[10];
    //they print without space.if we take space in string then print one word before space.
    scanf("%s",str);//& do not taking in string 
    printf("%s",str);
    // second method
    //they print all string considring space.
    gets(str);//it can input intaire sentence 
    puts(str);
    return 0;
}