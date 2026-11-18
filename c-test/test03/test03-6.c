#include <stdio.h>

int main()
{
    int n = 0;
    scanf_s("%d",&n);
    int grade = 0;
    int count = 0;

    int pre = 0;
    int good = 0;
    int med = 0;
    int pass =  0;
    int fail = 0;

    if (n<5){
        printf("人数不够");

    } else {
        do{
            scanf_s("%d",&grade);
            int score =  grade/10;
            switch (score){
                case 10:
                case 9:pre++;break;
                case 8:good++;break;
                case 7:med++;break;
                case 6:pass++;break;
                default:fail++;break;

            }
            count++;
        }while (count<n);
    }
    printf("%d %d %d %d %d",pre,good,med,pass,fail);

    
    return 0;
}