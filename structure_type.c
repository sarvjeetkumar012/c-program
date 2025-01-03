#include<stdio.h>
#include<string.h>

    struct car 
    {
        int price;
        float topsped;
        char segment[20];
    };
    int main (){
    struct car tata;//decration
    tata.price=950000;//assign value to member of tata
    tata.topsped=200;
    strcpy(tata.segment,"nexon"); //deep copy(use strcpy for string)
    // printf("record of nexon\n");
    printf("price of nexon:%d\n",tata.price);
    printf("nexon top speed:%f\n",tata.topsped);
    printf("tata segment car type:%s\n",tata.segment);
    
    
    return 0;
}