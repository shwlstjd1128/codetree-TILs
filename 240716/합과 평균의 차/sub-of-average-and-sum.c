#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int sum,avg;
    scanf("%d %d %d", &a,&b,&c);
    sum = a + b +c;
    avg = sum /3;
    printf("%d\n%d\n%d", sum,avg,sum-avg);
    return 0;
}