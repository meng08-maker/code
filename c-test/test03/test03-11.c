#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf_s("%d",&n);
    scanf_s("%d",&m);

  

    int count = 1;
    double s = 0;
    double height = (double)n;

    for (;count<m;count++){
        s += height;
        height/=4;
        s += height;

    }
    s += height;
    height/=4;
    printf("%.2f\n%.2f",s,height);




    return 0 ;
}