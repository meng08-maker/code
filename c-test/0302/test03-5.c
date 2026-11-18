#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int count = 0;
    int sum = 2;
    int i =1;
    double s = 0;
    
    do{
        s+=1.0*sum/i;
        int a=sum;
        sum+=i;
        i=a;

        count++;
    } while (count<n);

    printf("%.2f",s);
    return 0 ;
}