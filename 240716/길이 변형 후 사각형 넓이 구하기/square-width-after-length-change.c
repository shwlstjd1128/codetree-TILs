#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; //a는 가로 b는 세로
    scanf("%d %d",&a,&b );
    a+= 8;
    b *= 3;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", a*b);
    return 0;
}