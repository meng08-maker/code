#include <stdio.h>

int  main()
{
    float km = 0;
    scanf_s("%f",&km);
    int n = 0;
    scanf_s("%d",&n);
    double price = 0;
    
    if (km<3) {
        price = 13;
    } else if (km<15) {
        price = 13+(km-3)*2.3;
    } else {
        price =  40.6+(km-15)*3.45;
    }

    if (n==1){
        price *= 1.20;

    }
    
    printf("%.2f",price);

    return 0;
}