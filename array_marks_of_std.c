//give an array of marks of student. if the marks of any student is less than 35 print its roll number.
#include<stdio.h>
int main(){
    int arr_of_marks[11]={34,67,32,78,99,100,21,45,31,18,12};
    for (int i = 0; i <= 10; i++)
    {
        
        if (arr_of_marks[i]<35)
        {
            printf("%d ",i);
        }
        
        
    }
   
    return 0;
}