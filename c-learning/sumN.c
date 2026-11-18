// 1+1/2+1/3……+1/n
#include <stdio.h>

int main()
{
    int n;
    scanf_s("%d",&n);
    double sum = 0;
    int i;
    for (i=1;i<=n;i++)
    {
        sum += 1.0/i;

    }

    printf("f(%d)=%.2f",n,sum);

    return 0;
}