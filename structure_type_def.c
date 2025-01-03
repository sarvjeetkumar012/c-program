#include<stdio.h>
#include<string.h>

    typedef struct car //typedef use(avoid rewrite struct)
    {
        int price;
        float topsped;
        char segment[20];
    } car;
    int main (){
    car tata;//decration
    tata.price=950000;//assign value to member of tata
    tata.topsped=200;
    strcpy(tata.segment,"nexon"); //deep copy(use strcpy for string)
    // printf("record of nexon\n");
    printf("price of nexon:%d\n",tata.price);
    printf("tata segment car type:%s\n",tata.segment);
    printf("nexon top speed:%f\n",tata.topsped);
    
    
    return 0;
}