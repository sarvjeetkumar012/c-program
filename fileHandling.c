#include<stdio.h>
int main(){
    FILE* ptr=fopen("filehandling_sarvjeet.txt","r");//"w","a";"r+","w+","a+" only use in fopen function in c.
    char str[1000];
    while(fgets(str,1000,ptr)!=NULL)
    printf("%s",str);
    //return 0;
}




// to create a text file in vs code 
//use this:    FILE* ptr=fopen("filehandling_sarvjeet.txt","r");



