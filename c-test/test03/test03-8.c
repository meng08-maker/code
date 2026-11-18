#include <stdio.h>

int main()
{
    int n =  0;
    scanf_s("%d",&n);
    float price = 0;
    scanf_s("%f",&price);

    if (n==1){
        if (price>200){
            price*=0.75;
            printf("%.2f",price);
        } else {
            price*=0.8;
            printf("%.2f",price);
        }
    } else if (n==0) {
        if (price>100){
            price*=0.9;
            printf("%.2f",price);
        } else {
            printf("%.2f",price);
        }
    }

    return 0;
}