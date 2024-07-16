#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int x;

    scanf("%d %d", &a,&b);
    x = a>b ? a:b;
    printf("%d", x);
    return 0;
}