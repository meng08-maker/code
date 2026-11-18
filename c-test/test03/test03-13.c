#include <stdio.h>

int main()
{
    float s = 0 ;
    double bonus = 0;
    scanf_s("%f",&s);
    int  t =(int) (s/1000);

    switch(t){
        
        case 0:bonus = s;break;
        case 1:bonus  = s*0.9;break;
        case 2:bonus = s*0.85;break;
        case 3:bonus = s*0.8;break;
        default:bonus = s*0.75;break;

    }

    printf("%.2f",bonus);

    return 0 ;
}