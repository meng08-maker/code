#include <stdio.h>
#include <stdlib.h>

int fabonacci (int n);

int main (void)
{
    int n = 0;
    scanf_s("%d", &n);
    int output = fabonacci(n);
    printf("%d", output );

    return 0 ;
}

int fabonacci (int n)
{
    int flag = 1;
    int cnt = 2;
    int f1 = 1;
    for (;cnt < n;cnt++){
        int lastflag = flag;
        flag += f1;
        f1 = lastflag;
    }
    return flag;
}