#include <stdio.h>

int main()
{
    int n = 0;
    scanf_s("%d",&n);
    
    if (n<1000 && n>=100){
        int t;
        do{
            t=n%10;
            n/=10;
            if (t>0){
                printf("%d",t);
            }
        }while(n>0);
    } else {
        printf("-1");
    }
    
    

    return 0;
}