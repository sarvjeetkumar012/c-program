#include<stdio.h>

int main(){
    char ptr='A';
    for(int i = 0;i<5;i++){
        for(int j=0;j<i;j++){
            printf("%c",ptr);
            ptr++;
        }
        printf("\n");
    }
}