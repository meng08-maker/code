#include <stdio.h>

// a=12345
// print 5,4,3,2,1
// a%10=5
// a/10=1234


int main(){
    // int a;
    // scanf_s("%d",&a);
    int a=12345;
    int t;
    int b=0;
    do{
        t=a%10;
        printf("%d ",t);
        a/=10;
        b=b*10+t;
    }while(a!=0);
    printf("\n");
    int i;
    do{
        i=b%10;
        printf("%d",i);
        b/=10;
        if(b!=0){
            printf(" ");
        }
    }while(b!=0);
    
    return 0;
}