#include<stdio.h>
int main() {
    int a;
    int *p;
    p = &a;
    printf("%p",p); //%p 占位符
    return 0;
}

//输出：0x7fff7544278c