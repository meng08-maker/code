#include <stdio.h>



int main()
{
    int x = 12345;
    int t;
    int b=0;
    do{
        t=x%10;
        x/=10;
        b=b*10+t;
    }while(x!=0);
    printf("%d",b);
    return 0;
}