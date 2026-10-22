//时间差计算

#include<stdio.h>

int main()
{
    int hour1,min1;
    printf("请输入第一个时间（小时，分钟）：");
    scanf_s("%d,%d",&hour1,&min1);
    int hour2,min2;
    printf("请输入第二个时间（小时，分钟）：");
    scanf_s("%d,%d",&hour2,&min2);
    int time1=hour1*60+min1;
    int time2=hour2*60+min2;
    // int time1,time2;
    // time1=hour1*60+min1;
    // time2=hour2*60+min2;
    int cha;
    cha=time2-time1;
    printf("时间差为：%d小时%d分钟",cha/60,cha%60);



}