#include <stdio.h>

int main()
{
    int n = 0;
    scanf_s("%d",&n);
    //n=4;
    double s = 0;
    int count = 0;
    double sum = 0;
    int i = 1;

    for (i = 1;count<n;count++){
        sum += i;
        s += 1.0/sum;
        i++;
    }

    printf("%.4f",s);


    return 0 ;
}