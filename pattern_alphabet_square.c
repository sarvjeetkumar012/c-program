/*print Alphabet square:
ABCD
ABCD
ABCD
ABCD*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            int d = a + 64;
            char ch = (char)d; // typecasting->ch=(char)65->ch='A'.            
            printf("%c ",d);
            a++;
        }
        printf("\n");
    }

    return 0;
}