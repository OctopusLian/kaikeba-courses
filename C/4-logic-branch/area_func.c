#include <stdio.h>
int main() {
    int x;
    int y;
    // 从用户处获得输入值 x
    printf("请输入 x 的值：");
    scanf("%d", &x);

    // 在下面完成你的逻辑
	y = (x >= 0 ? 1 : -1);  //条件？值1：值2

    // 接下来的部分会输出 y 的结果
    printf("y = %d", y);
    return 0;
}