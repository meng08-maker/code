#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int t;
    int b=0;
    int count = 0;
    do{
        t=a%10;
        a/=10;
        b=b*10+t;
        count++;
    }while(a!=0);

    printf("%d\n",count);
    int f = b;

    int i;
    do{
        i=b%10;
        printf("%d",i);
        b/=10;
    }while(b!=0);
    
    printf("\n%d",f);

    return 0 ;
}