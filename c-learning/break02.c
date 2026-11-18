#include <stdio.h>
int main()
{
//    12345/10000=1
//    12345%10000=2345
//    2345/1000=2
//    2345%1000=345
//    345/100=3
//    345%100=45
//    45/10=4
//    45%10=5 
    int a;
    scanf_s("%d",&a);
    // int a=12345;
    
    int t=a;
    int cnt=0;
    do{
        t/=10;
        cnt++;

    }while (t>0);


    int x=0;
    int mask; 
    for (mask=1;x<cnt-1;x++)
    {
        mask*=10;
    }
    printf("%d\n",mask);

    do{
        int digit=a/mask;
        printf("%d ",digit);
        a%=mask;
        mask/=10;

    } while(mask>0);
    printf("\n");
    return 0;
}