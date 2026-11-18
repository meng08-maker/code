#include <stdio.h>

int main ()
{
    int n;
    scanf_s("%d",&n);
    int count = 0 ;
    float sum = 0.00;
    float min = 100.00;
    float price = 0.00;
    
    while (count<n)
    {
        scanf_s("%f",&price);
        if (price<min){
            min=price;
        }
        sum+=price;
        count++;
    }

    if (sum<20.00){
        printf("error");
    } else if (sum>=20&&sum<30){
        printf("%.2f",sum+8.00);
    } else if (sum>=30&&sum<40){
        printf("%.2f",sum+5.00);
    }else if (sum>=40&&sum<80){
        printf("%.2f",sum);
    }else if (sum>=80){
        printf("%.2f",sum-min);
    }
    

    return 0;
}