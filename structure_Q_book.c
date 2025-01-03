#include<stdio.h>
#include<string.h>
struct book
{
    char name[20];
    float price;
    int num_of_page;
};
int main(){
    struct book maths;
    strcpy(maths.name,"discrete mathematics");
    maths.price=350.60;
    maths.num_of_page=1500;
    printf("name of book:%s\n",maths.name);
    printf("price of book:%f\n",maths.price);
    printf("pages of book:%d\n",maths.num_of_page);

    return 0;
}
