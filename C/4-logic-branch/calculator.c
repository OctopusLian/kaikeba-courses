#include <stdio.h>
int main() {
    int first;
    int second;
    char operator;
    scanf("%d%c%d", &first,&operator, &second);
    if (operator == '+') {
        printf("=%d",first + second);
    } else if (operator == '-') {
        printf("=%d",first - second);
    } else if (operator == '/') {
        printf("=%d",first / second);
    } else if (operator == '*') {
         printf("=%d",first * second);
    } else {
        printf("=%d",first % second);
    }
    return 0;
}