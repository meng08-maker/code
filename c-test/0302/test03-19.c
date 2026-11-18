#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a = 100000;
    int  b = 1;
    int s = 0;
    int sum = 0;
    int count = 0;
    for(;count<n;count++){
        sum+=b;
        b*=2;
    }
    s = a*n;
    printf("%d\n",s);
    printf("%d\n",sum);


    return 0 ;
}