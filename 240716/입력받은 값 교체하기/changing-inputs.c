#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,tmp;
    scanf("%d %d", &a,&b);
    tmp =a;
    a = b;
    b=tmp;
    printf("%d %d", a,b);
    return 0;
}