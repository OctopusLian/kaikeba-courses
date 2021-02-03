//对于一个给定底和高的直角三角形，输出它的周长和面积。
#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c; //使用 double 类型的变量确保计算精度
    scanf("%lf %lf",&a,&b); //使用 "%lf %lf" 作为 scanf 的第一个参数，浮点数变量获取值的占位符
    c = sqrt(a*a + b*b);
    printf("%.2f\n",a + b + c); //周长
    printf("%.2f\n",(a * b) / 2); //面积

    return 0;
}