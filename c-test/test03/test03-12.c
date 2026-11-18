#include <stdio.h>

int main()
{
    int n = 0;
    int num =  0;
    int nor = 0;
    scanf_s("%d",&n);
    scanf_s("%d",&num);
    scanf_s("%d",&nor);
    int price = 0 ;

    if (num>=10){
        
        price = num*40;
        
    } else{
        if (n==1){
            price = num*30;
        } else {
            price = num*50;
        }
    }
    
    if (nor==1){
        price = price + num*10;
    }

    printf("%d",price);
    
    return 0 ;
}