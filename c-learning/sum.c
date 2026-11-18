#include <stdio.h>

int main()
{
    int sum=0;
    int count=0;
    int num;

    // do{
    //     scanf_s("%d",&num);
    //     if (num != -1){
    //         sum+=num;
    //         count++;
    //     }
    // } while (num != -1);

    scanf_s("%d",&num);
    while (num != -1){
        sum+=num;
        count++;
        scanf_s("%d",&num);
    }

    printf("%.1f",1.0*sum/count);
    return 0;
}