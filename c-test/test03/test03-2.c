#include <stdio.h>

int main()
{
    int n = 0;
    scanf_s("%d",&n);
   
    double s = 0;
    double sum = 1;
    int a = 1;
    int i = 1;
  
    do{
        while (i <= a) {
            sum *= i;
            i++;
        } 
        s += 1.0/sum;
        a++;
    }while (a<=n);
    

    printf("%.5f",s);
    return 0;
}