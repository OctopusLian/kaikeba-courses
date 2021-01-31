//如何计算一个复杂式子的结果

#include <stdio.h>
#include <math.h>
int main() {
    double y;
    y = sqrt((1 - cos(0.5)) / 2);
    printf("%g",y);
    return 0;
}