/*
对于一个给定长和宽的矩形，输出它的周长和面积。
*/

#include <stdio.h>
int main() {
    int chang,kuan;
    scanf("%d %d",&chang,&kuan);
    printf("%d\n",(chang + kuan) * 2);
    printf("%d\n",chang * kuan);

    return 0;
}