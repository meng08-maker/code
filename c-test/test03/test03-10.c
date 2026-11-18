#include <stdio.h>

int main()
{
    int n = 0;
    scanf_s("%d",&n);
    int count = 0;
    int score = 0;
    int min =  10000;
    int max = score ;
    do{
        scanf_s("%d",&score);
        if (score>max){
            max = score;
        } 

        if (score<min){
            min = score;
        }

        count++;
    } while (count<n);

    printf("%d %d",max,min);

    return 0;
}