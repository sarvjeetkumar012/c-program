#include<stdio.h>
int main (){
    // char* str="sonu";
    // printf("%s\n",str);//print string use format specifire %s.
    // printf("%c",str[1]);//print charactar use format specifire %c.
    // str[0]='m';// error (in pointer do not modify  string) 
    // printf("%s",str);

    //in non pointer we can modify char.
    // char str[]="sonu";
    // printf("%s\n",str);
    // printf("%c\n",str[1]);
    // str[0]='m';
    // printf("%s",str);



    //in non pointer we can not modify all string
    //  char str[]="sonu";
    // printf("%s\n",str);
    // printf("%c\n",str[1]);
    // str[0]="monu";
    // printf("%s",str);

    //in pointer we can modify all string.
    char* str="sonu";
    printf("%s\n",str);
    printf("%c\n",str[1]);
    str="monu";
    printf("%s",str);

    return 0;

}