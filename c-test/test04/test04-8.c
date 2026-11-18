#include <stdio.h>
#include <stdlib.h>

int loop (int x);

int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int cnt;

    for (cnt = a;cnt <= b;cnt++){
        int i = cnt;
        int flag;
        if (( flag = loop (i))){
                printf("%d\n",cnt);
        }
    }

    return 0;
}


int loop (int x)
{
    int flag = 0;
    int i = x;
    int j;
    int k=0;

    do{
        j=x%10;
        x/=10;
        k=k*10+j;
    }while(x!=0);

    if ((k == i) && (i%2 == 0)){
        flag =  1;
    }
    return  flag;
}