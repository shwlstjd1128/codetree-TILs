#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char x,y;
    scanf("%d %c", &a,&x);
    scanf("%d %c", &b,&y);
    if ((a >= 19 && x == 'M') || (b >= 19 && y == 'M')){
        printf("1");
    }
    else
        printf("0");
    return 0;
}