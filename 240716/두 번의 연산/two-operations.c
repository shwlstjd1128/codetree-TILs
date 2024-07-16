#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, sum;
    scanf("%d", &a);
    sum = a;
    if(a % 2 != 0){
        sum = a + 3;
    }
    if(a % 3 == 0){
        sum /= 3;
    }
    printf("%d", sum);
    return 0;
}