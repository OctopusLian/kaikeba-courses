//计算球的大致体积

#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    double radius;
    radius = 12.0;
    printf("%g",4.0 / 3 * PI * pow(radius,3));
    return 0;
}