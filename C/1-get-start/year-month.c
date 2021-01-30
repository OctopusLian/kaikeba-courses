#include<stdio.h>
int main() {
    int year; //声明year变量
    year = 2021;  //year变量赋值
    {
        int month;  //声明month变量
        month = 5;  //month变量赋值5
        printf("%d 年 %d 月\n",year,month);  //2021 年 5 月
        year = 2016;
    }
    int month;
    month = 3;
    printf("%d 年 %d 月\n",year,month);  //2016 年 3 月

    return 0;
}