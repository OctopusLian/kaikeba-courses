//对于一个给定的半径 rr，计算对应圆的周长和面积。在计算过程中，\piπ 的值请近似地取 3.141593.14159。
#include <stdio.h>
#define PI 3.14159
int main() {
    double r;
    scanf("%lf",&r);
    printf("%.3f\n",2 * PI * r); //周长
    printf("%.3f\n",PI * r * r); //面积

    return 0;
}