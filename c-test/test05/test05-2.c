//
// Created by meng deao on 2026/11/16.
//
#include <stdio.h>
#include <stdlib.h>

int minnum (int a[][5], int len, int  *min);

int main(void) {
    int a[3][5];
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 5;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int min = a[0][3];
    int min_number = minnum (a, (int)(sizeof (a)/sizeof (a[0])), &min);
    printf("%d", min);
    return 0;
}

int  minnum (int a[][5], int len, int *min) {
    for (int i=1;i<len;i++) {
        if (*min > a[i][3]) {
            *min = a[i][3];
        }
    }
    return 1;
}