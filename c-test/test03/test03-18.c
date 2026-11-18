#include <stdio.h>
#include <math.h> // 引入数学库，用于计算平方根

// 判断一个数是否为素数的函数
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 1 及以下不是素数
    }
    if (num == 2) {
        return 1; // 2 是素数
    }
    int sqrtNum = sqrt(num); // 计算平方根，减少循环次数
    for (int i = 2; i <= sqrtNum; i++) {
        if (num % i == 0) {
            return 0; // 能被整除，不是素数
        }
    }
    return 1; // 是素数
}

int main() {
    int n;
    if (scanf_s("%d", &n) != 1) {
        return 1; // 输入无效
    }

    int found = 0; // 标记是否找到符合条件的素数
    for (int i = 1; i <= n; i++) {
        // 判断个位是否为 1
        if (i % 10 == 1) {
            // 判断是否为素数
            if (isPrime(i)) {
                if (found == 0) {
                    printf("%d", i); // 第一个数，不前置空格
                } else {
                    printf(" %d", i); // 后续数，前置空格
                }
                found = 1; // 标记已找到
            }
        }
    }

    if (found == 0) {
        printf("-1"); // 没有找到符合条件的素数
    }
    printf("\n"); // 换行

    return 0;
}