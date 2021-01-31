//a 的 n 次方

#include <stdio.h>
#include <math.h>  //引入math包，用于使用pow函数
int main() {
    double a;
    double n;
    a = 2.0;
    n = 4.0;
    // 在下面打出来 a 的 n 次方的结果
    printf("%f",pow(a,n));
    
    return 0;
}