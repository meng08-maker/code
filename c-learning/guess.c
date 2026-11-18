#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a=0;
    printf("我已经想好了一个1-100的数\n");
    do{
        printf("请猜猜这个数：");
        scanf_s("%d",&a);
        count++;
        if (a>number)
        {
            printf("太大了，受不了\n");

        } else if (a<number)
        {
            printf("too small, 没有感觉\n");

        }
    }while (a!=number);
    printf("真棒！只用了%d轮就得出了结果\n",count);
    return 0;
}