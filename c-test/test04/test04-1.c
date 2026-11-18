#include <stdio.h>

int sum(int m, int n); 

int main(void)
{
    int m = 0; 
    int n = 0; 
    scanf_s("%d", &m); 
    scanf_s("%d", &n); 
    int s = sum(m, n); 
    printf("%d", s);


    return 0;
}


int sum(int m, int n )
{
    int s = 0;
    int cnt = 0;
    for (cnt = m; cnt <= n; cnt++){
        s += m;
        m++;
    }
    return s;
}